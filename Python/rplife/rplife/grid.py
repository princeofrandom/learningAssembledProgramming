import collections

class lifeGrid:
    def __init__(self, Pattern):
        self.Pattern = Pattern
    
    def evolve(self):
        neighbors = (
            (-1,-1), # above left
            (-1,0), # above
            (-1,1), # above right
            (0,-1), # left
            (0,1), # right
            (1,-1), # below left
            (1,0), # below
            (1,1), #below right
        )

        num_neighbors = collections.defaultdict(int)
        for row, col in self.pattern.alive_cells:
            for drow, dcol in neighbors:
                num_neighbors[(row + drow, col + dcol)] += 1

        stay_alive = {
            cell for cell, num in num_neighbors.items() if num in {2,3}
        } & self.pattern.alive_cells
        come_alive = {
            cell for cell, num in num_neighbors.items() if num == 3
        } - self.pattern.alive_cells    

        self.pattern.alive_cells = stay_alive | come_alive


    def as_string(self, bbox):
        return (
            f"{self.pattern.name}:\n"
            f"Alive cells -> {sorted(self.pattern.alive_cells)}"
        )
        

    def __str__(self):
        pass

