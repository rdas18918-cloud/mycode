import pygame
import math

pygame.init()

# Full-screen window
screen = pygame.display.set_mode((0, 0), pygame.FULLSCREEN)
pygame.display.set_caption("Relaxing Pygame Grid")

W, H = screen.get_size()
clock = pygame.time.Clock()

# -------------------------------------------------
# Create the grid points
# Each point = [x, y, original_x, original_y, fixed]
# -------------------------------------------------

P = [
    [x * 20 + W / 4, y * 20 + 100,
     x * 20 + W / 4, y * 20 + 100,
     y == 0]
    for y in range(30)
    for x in range(50)
]

# Create horizontal and vertical connections
S = (
    [[i, i + 1, 1] for i in range(len(P)) if (i + 1) % 50]
    +
    [[i, i + 50, 1] for i in range(len(P) - 50)]
)

running = True

while running:

    # ---------------------------------------------
    # Events
    # ---------------------------------------------
    for event in pygame.event.get():

        if event.type == pygame.QUIT:
            running = False

        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_ESCAPE:
                running = False

    # Black background
    screen.fill((0, 5, 10))

    # Mouse position and buttons
    mx, my = pygame.mouse.get_pos()
    mouse_down = pygame.mouse.get_pressed()

    # ---------------------------------------------
    # Mouse interaction with grid points
    # ---------------------------------------------
    for p in P:

        if not p[4]:

            if mouse_down[0] and math.hypot(p[0] - mx, p[1] - my) < 30:
                p[0], p[1] = mx, my

            # Move the point back toward its original position
            vx = max(-20, min(20, (p[0] - p[2]) * 0.99))
            vy = max(-20, min(20, (p[1] - p[3]) * 0.99))

            p[2], p[3] = p[0], p[1]
            p[0] += vx
            p[1] += vy + 0.4

    # ---------------------------------------------
    # Relax the grid several times
    # ---------------------------------------------
    for _ in range(6):

        for sk in [k for k in S if k[2]]:

            p1 = P[sk[0]]
            p2 = P[sk[1]]

            dx = p2[0] - p1[0]
            dy = p2[1] - p1[1]

            d = math.hypot(dx, dy) or 0.1

            # Break/remove the connection when it is
            # stretched too far or affected by mouse
            if (
                d > 100
                or (
                    mouse_down[2]
                    and math.hypot(
                        (p1[0] + p2[0]) / 2 - mx,
                        (p1[1] + p2[1]) / 2 - my
                    ) < 15
                )
            ):
                sk[2] = 0
                continue

            # Spring force
            f = (20 - d) / d * 0.5

            if not p1[4]:
                p1[0] -= dx * f
                p1[1] -= dy * f

            if not p2[4]:
                p2[0] += dx * f
                p2[1] += dy * f

    # ---------------------------------------------
    # Draw the green grid
    # ---------------------------------------------
    for p1, p2, active in [k for k in S if k[2]]:

        pygame.draw.line(
            screen,
            (0, 255, 180),
            (int(P[p1][0]), int(P[p1][1])),
            (int(P[p2][0]), int(P[p2][1])),
            1
        )

    # Draw small points at the grid nodes
    for p in P:
        pygame.draw.circle(
            screen,
            (0, 255, 180),
            (int(p[0]), int(p[1])),
            1
        )

    pygame.display.flip()

    # Limit FPS
    clock.tick(60)

pygame.quit()