/*  Horse - dummy school project
 *
 * This code is copyright (C) Blagovest Petrov, 2009.
 *
 * This code may distributed only under the terms of the GNU Public License
 * which can be found at http://www.gnu.org/copyleft or in the file COPYING
 * supplied with this code.
 *
 * This code is not distributed with no warranties!
 * The original horse ASCII is from: http://www.chris.com/ASCII/
 * http://petrovs.info or <blagovest@petrovs.info> ;)
 */

#include <stdio.h>
#include <stdlib.h>
//kon[0] е празен кон (за изчистване на екрана)
//kon[1] е кон в покой (кон в статична позиция)
//kon[2] е кон с изпънато копито
//kon[3] е тпопкащ кон
const char *kon[4][9] = {{
"                            \n",
"                            \n",
"                             \n",
"                               \n",
"                         \n",
"                           \n",
"                          \n",
"                                        \n",
"                                   \n"
                       },{
"                        ;;\n",
"                      ,;;'\\ \n",
"           __       ,;;' ' \\ \n",
"         /'  '\\'~~'~' \\ /'\\.)\n",
"      ,;(      )    /  | \n",
"     ,;' \\    /-.,,(   )  \n",
"          ) /       ) /   \n",
"          ||        ||                  \n",
"          (_\\       (_\\            \n"
                       },{
"                        ;;\n",
"                      ,;;'\\ \n",
"           __       ,;;' ' \\ \n",
"         /'  '\\'~~'~' \\ /'\\.) \n",
"      ,;(      )    /  |. \n",
"     ,;' \\    /-.,,(   ) \\ \n",
"          ) /       ) / )| \n",
"          ||        ||  \\) \n",
"          (_\\       (_\\     "
                       },{
"                        ;;\n",
"                      ,;;'\\ \n",
"           __       ,;;' ' \\ \n",
"         /'  '\\'~~'~' \\ /'\\.)\n",
"      ,;(      )    /  | \n",
"     ,;' \\    /-.,,(   )  \n",
"          ) /       ) /\\\\ \n",
"          ||        ||  )|\n",
"          (_\\       (_\\ \\)"
                       }};
//Слаб кон, който не може да си намери трева
const char *kon_slab = "                        ;;\n                      ,;;'\\ \n           __       ,;;' ' \\ \n         /'  '\\'~~'~' \\ /'\\.)\n     ,;' \\    /-.,,(   )  \n          ) /       ) /   \n          ||        ||\n          (_\\       (_\\ \n";

//copyright информиция при изход :D
const char *about ="888888b.   888                               d8b    888      d8b 888 d8b\n888  \"88b  888                               Y8P    888      Y8P 888 Y8P \n888  .88P  888                                      888          888     \n8888888K.  888  8888b.   .d88b.   .d88b.     888    888      888 888 888 \n888  \"Y88b 888     \"88b d88P\"88b d88\"\"88b    888    888      888 888 888\n888    888 888 .d888888 888  888 888  888    888    888      888 888 888\n888   d88P 888 888  888 Y88b 888 Y88..88P    888    888      888 888 888\n8888888P\"  888 \"Y888888  \"Y88888  \"Y88P\"     888    88888888 888 888 888\n                             888                                         \n                        Y8b d88P                                        \n                         \"Y88P\"                                         \n";

//въпроси
const char *vuprosi[5] = {
"Porodata kone \"Pershefon\" ot frenski proizhod li e?",
"Konete obichat li zahar?",
"5 kopita li ima konq?",
"Konete imat li krila?",
"Konete imat li potni jlezi?" };

//отговори
char otgovori[5] = { 'd', 'd', 'n', 'n', 'd'} ;
