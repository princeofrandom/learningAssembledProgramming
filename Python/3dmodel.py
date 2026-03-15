# Source - https://stackoverflow.com/a/67101990
# Posted by anon01, modified by community. See post 'Timeline' for change history
# Retrieved 2026-03-14, License - CC BY-SA 4.0

import plotly.graph_objects as go
import numpy as np
import math

x = np.arange(-1,1,.01)
y = np.arange(-1,1,.01)
X,Y = np.meshgrid(x,y)
a = 3
b = 3
Z = np.sqrt((a**2)*(x**2) + (b**2)*(y**2))

fig = go.Figure(
    data=[go.Surface(z=Z, x=x, y=y, colorscale="Reds", opacity=0.5)])

fig.show()


# 3d modeling stuff!