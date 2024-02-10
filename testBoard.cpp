/***********************************************************************
 * Source File:
 *    TEST BOARD
 * Author:
 *    Josh & Steven
 * Summary:
 *    The unit tests for board
 ************************************************************************/


#include "testBoard.h"
#include "position.h"
#include "piece.h"
#include "pieceRook.h"
#include "pieceKnight.h"
#include "pieceBishop.h"
#include "pieceQueen.h"
#include "pieceKing.h"
#include "piecePawn.h"
#include "board.h"
#include <cassert>



 /********************************************************
  *   a2a3
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  * |                     |       |                     |
  * 8                     8       8                     8
  * 7                     7       7                     7
  * 6                     6       6                     6
  * 5                     5       5                     5
  * 4                     4  -->  4                     4
  * 3   .                 3       3   p                 3
  * 2  (p)                2       2   .                 2
  * 1                     1       1                     1
  * |                     |       |                     |
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  ********************************************************/
void TestBoard::move_pawnSimple()
{
//   // SETUP
//   Board board = Board();
//   Pawn pawn = Pawn(7, 7, false);
//   
//   pawn.fWhite = true;
//   pawn.position.set(0, 1);
//   pawn.nMoves = 0;
//   
//   board.board[0][1] = &pawn;
//   
//   Move move = Move(Position(0, 1), Position(0, 2));
//   
//   // EXERCISE
//   board.move(move);
//   
//   // VERIFY
//   assertUnit(board.board[0][1]->getType() == SPACE);
//   assertUnit(board.board[0][2]->getType() == PAWN);
//   
//   // TEARDOWN
}


 /********************************************************
  *     a6b7r
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  * |                     |       |                     |
  * 8                     8       8                     8
  * 7     R               7       7    (p)              7
  * 6  (p)                6       6   .                 6
  * 5                     5       5                     5
  * 4                     4  -->  4                     4
  * 3                     3       3                     3
  * 2                     2       2                     2
  * 1                     1       1                     1
  * |                     |       |                     |
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  ********************************************************/
void TestBoard::move_pawnCapture()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}


 /********************************************************
  *    e2e4
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  * |                     |       |                     |
  * 8                     8       8                     8
  * 7                     7       7                     7
  * 6                     6       6                     6
  * 5                     5       5                     5
  * 4           .         4  -->  4          (p)        4
  * 3                     3       3                     3
  * 2          (p)        2       2           .         2
  * 1                     1       1                     1
  * |                     |       |                     |
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  ********************************************************/
void TestBoard::move_pawnDouble()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}


 /********************************************************
 *     a5b6E
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  * |                     |       |                     |
  * 8                     8       8                     8
  * 7                     7       7                     7
  * 6     .               6       6     p               6
  * 5  (p)P               5       5   . .               5
  * 4                     4  -->  4                     4
  * 3                     3       3                     3
  * 2                     2       2                     2
  * 1                     1       1                     1
  * |                     |       |                     |
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  ********************************************************/
void TestBoard::move_pawnEnpassant()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}


 /********************************************************
  *    a7a8Q 
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  * |                     |       |                     |
  * 8   .                 8       8  (r)                8
  * 7  (p)                7       7   .                 7
  * 6                     6       6                     6
  * 5                     5       5                     5
  * 4                     4  -->  4                     4
  * 3                     3       3                     3
  * 2                     2       2                     2
  * 1                     1       1                     1
  * |                     |       |                     |
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  ********************************************************/
void TestBoard::move_pawnPromotion()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}


 /********************************************************
  *    e5a5
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  * |                     |       |                     |
  * 8                     8       8                     8
  * 7                     7       7                     7
  * 6                     6       6                     6
  * 5   .      (r)        5       5  (r)      .         5
  * 4                     4  -->  4                     4
  * 3                     3       3                     3
  * 2                     2       2                     2
  * 1                     1       1                     1
  * |                     |       |                     |
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  ********************************************************/
void TestBoard::move_rookSlide()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}


 /********************************************************
  *    e5a5b
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  * |                     |       |                     |
  * 8                     8       8                     8
  * 7                     7       7                     7
  * 6                     6       6                     6
  * 5   B      (r)        5       5  (r)      .         5
  * 4                     4  -->  4                     4
  * 3                     3       3                     3
  * 2                     2       2                     2
  * 1                     1       1                     1
  * |                     |       |                     |
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  ********************************************************/
void TestBoard::move_rookAttack()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}


 /********************************************************
  *    e5g3
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  * |                     |       |                     |
  * 8                     8       8                     8
  * 7                     7       7                     7
  * 6                     6       6                     6
  * 5          (b)        5       5           .         5
  * 4                     4  -->  4                     4
  * 3               .     3       3               b     3
  * 2                     2       2                     2
  * 1                     1       1                     1
  * |                     |       |                     |
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  ********************************************************/
void TestBoard::move_bishopSlide()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}


 /********************************************************
  *    e5g3q
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  * |                     |       |                     |
  * 8                     8       8                     8
  * 7                     7       7                     7
  * 6                     6       6                     6
  * 5          (b)        5       5           .         5
  * 4                     4  -->  4                     4
  * 3               Q     3       3               b     3
  * 2                     2       2                     2
  * 1                     1       1                     1
  * |                     |       |                     |
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  ********************************************************/
void TestBoard::move_bishopAttack()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/********************************************************
 *    e5g3
 * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
 * |                     |       |                     |
 * 8                     8       8                     8
 * 7                     7       7                     7
 * 6                     6       6                     6
 * 5          (q)        5       5                     5
 * 4                     4  -->  4           .         4
 * 3                .    3       3               q     3
 * 2                     2       2                     2
 * 1                     1       1                     1
 * |                     |       |                     |
 * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
 ********************************************************/
void TestBoard::move_queenSlide()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}


/********************************************************
*    e5a5b
* +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
* |                     |       |                     |
* 8                     8       8                     8
* 7                     7       7                     7
* 6                     6       6                     6
* 5   B      (q)        5       5  (q)      .         5
* 4                     4  -->  4                     4
* 3                     3       3                     3
* 2                     2       2                     2
* 1                     1       1                     1
* |                     |       |                     |
* +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
********************************************************/
void TestBoard::move_queenAttack()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}


 /********************************************************
  *  e1f1
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  * |                     |       |                     |
  * 8                     8       8                     8
  * 7                     7       7                     7
  * 6                     6       6                     6
  * 5                     5       5                     5
  * 4                     4  -->  4                     4
  * 3                     3       3                     3
  * 2                     2       2                     2
  * 1          (k).       1       1           . k       1
  * |                     |       |                     |
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  ********************************************************/
void TestBoard::move_kingMove()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}


 /********************************************************
  *    e1f1r
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  * |                     |       |                     |
  * 8                     8       8                     8
  * 7                     7       7                     7
  * 6                     6       6                     6
  * 5                     5       5                     5
  * 4                     4  -->  4                     4
  * 3                     3       3                     3
  * 2                     2       2                     2
  * 1          (k)R       1       1           . k       1
  * |                     |       |                     |
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  ********************************************************/
void TestBoard::move_kingAttack()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /********************************************************
  *    e1g1c
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  * |                     |       |                     |
  * 8                     8       8                     8
  * 7                     7       7                     7
  * 6                     6       6                     6
  * 5                     5       5                     5
  * 4                     4  -->  4                     4
  * 3                     3       3                     3
  * 2                     2       2                     2
  * 1          (k). . r   1       1           . r k .   1
  * |                     |       |                     |
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  ********************************************************/
void TestBoard::move_kingShortCastle()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}



 /********************************************************
  *    e1c1C 
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  * |                     |       |                     |
  * 8                     8       8                     8
  * 7                     7       7                     7
  * 6                     6       6                     6
  * 5                     5       5                     5
  * 4                     4  -->  4                     4
  * 3                     3       3                     3
  * 2                     2       2                     2
  * 1   r . . .(k)        1       1   . . k r .         1
  * |                     |       |                     |
  * +---a-b-c-d-e-f-g-h---+       +---a-b-c-d-e-f-g-h---+
  ********************************************************/
void TestBoard::move_kingLongCastle()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}




/******************************************************** 
 *        +---a-b-c-d-e-f-g-h---+
 *        |                     |
 *        8   R N B Q K B N R   8
 *        7   P P P P P P P P   7
 *        6                     6
 *        5                     5
 *   -->  4                     4
 *        3                     3
 *        2   p p p p p p p p   2
 *        1   r n b q k b n r   1
 *        |                     |
 *        +---a-b-c-d-e-f-g-h---+
 ********************************************************/
void TestBoard::construct_default()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}
