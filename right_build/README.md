## Knowledge Used
* stl (set,vector and pair)
* sort
* cartesian plane

## Problem
In a MMORPG «Path of Exile» characters grow by acquiring talents for special talent points received in a game process. Talents can depend on others. A talent can be acquired only if a character has at least one of the talents it depends on. Acquiring one talent costs one talent point. At the beginning of the game a character has a single starting talent.
<br>
Schoolboy Vasiliy decided to record a video manual how to level-up a character in a proper way, following which makes defeating other players and NPCs very easy. He numbered all  talents as integers from 0 to n, so that the starting talent is numbered as 0. Vasiliy thinks that the only right build is acquiring two different talents a and b as quickly as possible because these talents are imbalanced and much stronger than any others. Vasiliy is lost in thought what minimal number of talent points is sufficient to acquire these talents from the start of the game.

#### Input
The first line contains four space-separated integers: n, m, a and b (2 ≤ n, m ≤ 2·10^5, 1 ≤ a, b ≤ n, a ≠ b) — the total number of talents, excluding the starting talent, the number of dependencies between talents, and the numbers of talents that must be acquired.
<br>
Each of the next m lines contains two space-separated integers: xj and yj (0 ≤ xj ≤ n, 1 ≤ yj ≤ n, xj ≠ yj), which means the talent yj depends on the talent xj. It's guaranteed that it's possible to acquire all  talents given the infinite number of talent points.

#### Output
Output a single integer — the minimal number of talent points sufficient to acquire talents a and b.