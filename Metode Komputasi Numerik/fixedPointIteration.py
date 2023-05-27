def fixed_point_iteration(g, x0, epsilon, max_iteration):
    x = x0
    for i in range(max_iteration):
        x_next = g(x)
        if abs(x_next - x) < epsilon:
            return x_next
        x = x_next
    return None