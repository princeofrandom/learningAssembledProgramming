# Source - https://stackoverflow.com/a/67101990
# Posted by anon01, modified by community. See post 'Timeline' for change history
# Retrieved 2026-03-14, License - CC BY-SA 4.0

import plotly.graph_objects as go
import numpy as np

x = np.arange(-1,1,.01)
y = np.arange(-1,1,.01)
X,Y = np.meshgrid(x,y)
a = 3
b = 2
Z = a*X**2 + b*Y**2

fig = go.Figure(
    data=[go.Surface(z=Z, x=x, y=y, colorscale="Reds", opacity=0.5)])
fig.update_layout(
    title='My title', 
    autosize=False,
    width=500, 
    height=500,
    margin=dict(l=65, r=50, b=65, t=90), 
    scene_aspectmode='cube'
)
fig.show()


# 3d modeling stuff!