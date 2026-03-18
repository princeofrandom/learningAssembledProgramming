from dataclasses import dataclass

@dataclass
class Pattern:
    name: str # lets you make a name for each instance of a pattern object
    alive_cells: set[tuple[int, int]] # defines the initial set of starting "alive" cells as a set of two-integer tuples


