# Bomberman World — Bomberman Game

**Student:** Pähirdin Palihati

## How to play

- **Controls:** 
WASD or arrow keys = move. 
Space = place a bomb. 
Enter = start the round. 
Q or Escape during or after a round = new round and back to the start page. 
Q or Escape on the start page = quit.

- **Objective and rules:** 
Reach 100 points. 
A bombed crate gives 1 point
An enemy bombed 3 points. 
A blast or an enemy touch kills you and you loose. 
Blue squares give +1 blast range, max up to 20 from +1's. 
You can have 3 bombs at once. 
Every round starts with a 5 second shield.

- **Configurations / demo setup:** 
default
The map is new every launch and every restart

## Features and validation

| Feature | Check, observed result, and expected behaviour |
| --- | --- |
| 1. Player damage and death | I stood on my own bomb and died, I walked into an enemy and died, I stood a tile away from the bomb blast and lived. After death the player could not move and the round stayed Lost until restart, as expected. |

| 2. Round states and objective | I won one round by reachinng 100 points and lost another by standing in a blast. In both, enemies and fuses stopped and Space did nothing, as expected. |

| 3. Safe restart | I died while a bomb was still ticking and restarted at once, twice in a row. No old exploson appeared, score was 0, range 3, the shield was back and I could place 3 bombs. |

| 4. Solid bombs with owner escape | I placed a bomb, walked off it, and could not walk back in, after it exploded I walked through its tile. An enemy walking into my bomb turned around. Pressing Space twice on the same tile placed only one bomb. |

| 5. Blast-range pickup | I walked next to a pickup (no change) , then onto it (range 3 to 4) walking over the spot again kept 4. A bomb placed before the pickup still had range 3, the next one had 4. |

| 6. Multiple bombs per owner | I placd 3 bombs, a 4th press did nothing and the HUD showed 3 empty circles. When one exploded a circle refilled and I could place one more. I repeated the cycle twice. |

| 7. Chain reactions | I placed bomb A, then bomb B within A's range 1 second later. A's blast set off B early, and B exploded only once. |

| 8. Temporary invulnerability | At round start I stood in my own blast and survived (shield on). After the shield circle disappeared, the same test killed me. After restart the shield was back. |

**Known issues:** If a bomb is placed while an enemy is standing on that tile, the enemy cannot move until the bomb explodes (the blast then destroys it).

## Sources and assistance

This project builds on the shared Kotte foundations.

I used Claude as a tutor, using it to explain the course code and review my code implementations for each extensions + 5 main features and using its suggestions for some features (random seed per round, crate density) and for fixes to build errors. I tested every feature in the game myself. No other external code was used.

