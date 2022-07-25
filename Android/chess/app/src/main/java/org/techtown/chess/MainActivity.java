package org.techtown.chess;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.graphics.Color;
import android.media.Image;
import android.os.Bundle;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.ImageButton;
import android.widget.ImageView;
import android.widget.TableLayout;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    //ImageButton currentObject;
    int clickedX = -1;
    int clickedY = -1;
    int clickedX_tmp = -1;
    int clickedY_tmp = -1;
    int turnColor = 1;
    boolean castlingFlag = false; //@

    ImageButton imgBtn[][] = new ImageButton[8][8];
    int objectPosition[][] = new int[8][8];

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TableLayout layout = (TableLayout) findViewById(R.id.tableLayout);
        ViewGroup.LayoutParams params = layout.getLayoutParams();
        int width = params.width;
        params.height = width;
        layout.setLayoutParams(params);

        imgBtn[0][0] = (ImageButton) findViewById(R.id.imageButton00);
        imgBtn[0][1] = (ImageButton) findViewById(R.id.imageButton01);
        imgBtn[0][2] = (ImageButton) findViewById(R.id.imageButton02);
        imgBtn[0][3] = (ImageButton) findViewById(R.id.imageButton03);
        imgBtn[0][4] = (ImageButton) findViewById(R.id.imageButton04);
        imgBtn[0][5] = (ImageButton) findViewById(R.id.imageButton05);
        imgBtn[0][6] = (ImageButton) findViewById(R.id.imageButton06);
        imgBtn[0][7] = (ImageButton) findViewById(R.id.imageButton07);

        imgBtn[1][0] = (ImageButton) findViewById(R.id.imageButton10);
        imgBtn[1][1] = (ImageButton) findViewById(R.id.imageButton11);
        imgBtn[1][2] = (ImageButton) findViewById(R.id.imageButton12);
        imgBtn[1][3] = (ImageButton) findViewById(R.id.imageButton13);
        imgBtn[1][4] = (ImageButton) findViewById(R.id.imageButton14);
        imgBtn[1][5] = (ImageButton) findViewById(R.id.imageButton15);
        imgBtn[1][6] = (ImageButton) findViewById(R.id.imageButton16);
        imgBtn[1][7] = (ImageButton) findViewById(R.id.imageButton17);

        imgBtn[2][0] = (ImageButton) findViewById(R.id.imageButton20);
        imgBtn[2][1] = (ImageButton) findViewById(R.id.imageButton21);
        imgBtn[2][2] = (ImageButton) findViewById(R.id.imageButton22);
        imgBtn[2][3] = (ImageButton) findViewById(R.id.imageButton23);
        imgBtn[2][4] = (ImageButton) findViewById(R.id.imageButton24);
        imgBtn[2][5] = (ImageButton) findViewById(R.id.imageButton25);
        imgBtn[2][6] = (ImageButton) findViewById(R.id.imageButton26);
        imgBtn[2][7] = (ImageButton) findViewById(R.id.imageButton27);

        imgBtn[3][0] = (ImageButton) findViewById(R.id.imageButton30);
        imgBtn[3][1] = (ImageButton) findViewById(R.id.imageButton31);
        imgBtn[3][2] = (ImageButton) findViewById(R.id.imageButton32);
        imgBtn[3][3] = (ImageButton) findViewById(R.id.imageButton33);
        imgBtn[3][4] = (ImageButton) findViewById(R.id.imageButton34);
        imgBtn[3][5] = (ImageButton) findViewById(R.id.imageButton35);
        imgBtn[3][6] = (ImageButton) findViewById(R.id.imageButton36);
        imgBtn[3][7] = (ImageButton) findViewById(R.id.imageButton37);

        imgBtn[4][0] = (ImageButton) findViewById(R.id.imageButton40);
        imgBtn[4][1] = (ImageButton) findViewById(R.id.imageButton41);
        imgBtn[4][2] = (ImageButton) findViewById(R.id.imageButton42);
        imgBtn[4][3] = (ImageButton) findViewById(R.id.imageButton43);
        imgBtn[4][4] = (ImageButton) findViewById(R.id.imageButton44);
        imgBtn[4][5] = (ImageButton) findViewById(R.id.imageButton45);
        imgBtn[4][6] = (ImageButton) findViewById(R.id.imageButton46);
        imgBtn[4][7] = (ImageButton) findViewById(R.id.imageButton47);

        imgBtn[5][0] = (ImageButton) findViewById(R.id.imageButton50);
        imgBtn[5][1] = (ImageButton) findViewById(R.id.imageButton51);
        imgBtn[5][2] = (ImageButton) findViewById(R.id.imageButton52);
        imgBtn[5][3] = (ImageButton) findViewById(R.id.imageButton53);
        imgBtn[5][4] = (ImageButton) findViewById(R.id.imageButton54);
        imgBtn[5][5] = (ImageButton) findViewById(R.id.imageButton55);
        imgBtn[5][6] = (ImageButton) findViewById(R.id.imageButton56);
        imgBtn[5][7] = (ImageButton) findViewById(R.id.imageButton57);

        imgBtn[6][0] = (ImageButton) findViewById(R.id.imageButton60);
        imgBtn[6][1] = (ImageButton) findViewById(R.id.imageButton61);
        imgBtn[6][2] = (ImageButton) findViewById(R.id.imageButton62);
        imgBtn[6][3] = (ImageButton) findViewById(R.id.imageButton63);
        imgBtn[6][4] = (ImageButton) findViewById(R.id.imageButton64);
        imgBtn[6][5] = (ImageButton) findViewById(R.id.imageButton65);
        imgBtn[6][6] = (ImageButton) findViewById(R.id.imageButton66);
        imgBtn[6][7] = (ImageButton) findViewById(R.id.imageButton67);

        imgBtn[7][0] = (ImageButton) findViewById(R.id.imageButton70);
        imgBtn[7][1] = (ImageButton) findViewById(R.id.imageButton71);
        imgBtn[7][2] = (ImageButton) findViewById(R.id.imageButton72);
        imgBtn[7][3] = (ImageButton) findViewById(R.id.imageButton73);
        imgBtn[7][4] = (ImageButton) findViewById(R.id.imageButton74);
        imgBtn[7][5] = (ImageButton) findViewById(R.id.imageButton75);
        imgBtn[7][6] = (ImageButton) findViewById(R.id.imageButton76);
        imgBtn[7][7] = (ImageButton) findViewById(R.id.imageButton77);

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                imgBtn[i][j].setBackgroundColor(Color.parseColor("#00ff0000"));
            }
        }

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                int n = i;
                int m = j;
                imgBtn[n][m].setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View view) {
                        if(clickedX == -1) {
                            clickedX = m;
                            clickedY = n;
                        }
                        else {
                            clickedX_tmp = clickedX;
                            clickedY_tmp = clickedY;
                            clickedX = m;
                            clickedY = n;

                            if(isTurn() && isMove()) {  // 턴이 맞는지 && 기물의 이동이 맞는지
                                move();                 // 기물을 clickedX, clickedY에 이동
                                changeTurnColor();      // 차례를 넘김
                            }

                            //String str = "" + clickedX + clickedY;
                            //Toast myToast = Toast.makeText(MainActivity.this, str, Toast.LENGTH_SHORT);
                            //myToast.show();
                        }
                    }
                });
            }
        }

        Button restart = (Button) findViewById(R.id.restart);
        restart.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                restart();
            }
        });

        Button exit = (Button) findViewById(R.id.exit);
        exit.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                finishAffinity();
                System.runFinalization();
                System.exit(0);
            }
        });

        restart();
    }

    public void restart() {
        turnColor = 1;

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                imgBtn[i][j].setImageResource(R.drawable.white);
            }
        }

        imgBtn[6][0].setImageResource(R.drawable.white_pawn);
        imgBtn[6][1].setImageResource(R.drawable.white_pawn);
        imgBtn[6][2].setImageResource(R.drawable.white_pawn);
        imgBtn[6][3].setImageResource(R.drawable.white_pawn);
        imgBtn[6][4].setImageResource(R.drawable.white_pawn);
        imgBtn[6][5].setImageResource(R.drawable.white_pawn);
        imgBtn[6][6].setImageResource(R.drawable.white_pawn);
        imgBtn[6][7].setImageResource(R.drawable.white_pawn);

        imgBtn[7][0].setImageResource(R.drawable.white_rook);
        imgBtn[7][1].setImageResource(R.drawable.white_knight);
        imgBtn[7][2].setImageResource(R.drawable.white_bishop);
        imgBtn[7][3].setImageResource(R.drawable.white_queen);
        imgBtn[7][4].setImageResource(R.drawable.white_king);
        imgBtn[7][5].setImageResource(R.drawable.white_bishop);
        imgBtn[7][6].setImageResource(R.drawable.white_knight);
        imgBtn[7][7].setImageResource(R.drawable.white_rook);

        imgBtn[0][0].setImageResource(R.drawable.black_rook);
        imgBtn[0][1].setImageResource(R.drawable.black_knight);
        imgBtn[0][2].setImageResource(R.drawable.black_bishop);
        imgBtn[0][3].setImageResource(R.drawable.black_queen);
        imgBtn[0][4].setImageResource(R.drawable.black_king);
        imgBtn[0][5].setImageResource(R.drawable.black_bishop);
        imgBtn[0][6].setImageResource(R.drawable.black_knight);
        imgBtn[0][7].setImageResource(R.drawable.black_rook);

        imgBtn[1][0].setImageResource(R.drawable.black_pawn);
        imgBtn[1][1].setImageResource(R.drawable.black_pawn);
        imgBtn[1][2].setImageResource(R.drawable.black_pawn);
        imgBtn[1][3].setImageResource(R.drawable.black_pawn);
        imgBtn[1][4].setImageResource(R.drawable.black_pawn);
        imgBtn[1][5].setImageResource(R.drawable.black_pawn);
        imgBtn[1][6].setImageResource(R.drawable.black_pawn);
        imgBtn[1][7].setImageResource(R.drawable.black_pawn);

        // blank (0)
        // white rook, knight, bishop, queen, king, pawn, superPawn, firstMovePawn, nonMoveRook, nonMoveKing (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
        // black rook, knight, bishop, queen, king, pawn, superPawn, firstMovePawn, nonMoveRook, nonMoveKing (-1, -2, -3, -4, -5, -6, -7, -8, -9, -10)

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                objectPosition[i][j] = 0;
            }
        }

        objectPosition[0][0] = -9;
        objectPosition[1][0] = -2;
        objectPosition[2][0] = -3;
        objectPosition[3][0] = -4;
        objectPosition[4][0] = -10;
        objectPosition[5][0] = -3;
        objectPosition[6][0] = -2;
        objectPosition[7][0] = -9;

        objectPosition[0][1] = -6;
        objectPosition[1][1] = -6;
        objectPosition[2][1] = -6;
        objectPosition[3][1] = -6;
        objectPosition[4][1] = -6;
        objectPosition[5][1] = -6;
        objectPosition[6][1] = -6;
        objectPosition[7][1] = -6;

        objectPosition[0][6] = 6;
        objectPosition[1][6] = 6;
        objectPosition[2][6] = 6;
        objectPosition[3][6] = 6;
        objectPosition[4][6] = 6;
        objectPosition[5][6] = 6;
        objectPosition[6][6] = 6;
        objectPosition[7][6] = 6;

        objectPosition[0][7] = 9;
        objectPosition[1][7] = 2;
        objectPosition[2][7] = 3;
        objectPosition[3][7] = 4;
        objectPosition[4][7] = 10;
        objectPosition[5][7] = 3;
        objectPosition[6][7] = 2;
        objectPosition[7][7] = 9;
    }

    // 현재 클릭된 좌표 확인
    public int getFirstClickedX() {
        return clickedX;
    }

    public int getFirstClickedY() {
        return clickedY;
    }

    // 직전에 클릭된 좌표 확인
    public int getClickedX_tmp() {
        return clickedX_tmp;
    }

    public int getClickedY_tmp() {
        return clickedY_tmp;
    }


    // blank (0)
    // white rook, knight, bishop, queen, king, pawn, superPawn, firstMovePawn, nonMoveRook, nonMoveKing (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
    // black rook, knight, bishop, queen, king, pawn, superPawn, firstMovePawn, nonMoveRook, nonMoveKing (-1, -2, -3, -4, -5, -6, -7, -8, -9, -10)
    // 2번째 클릭시 이동 가능한지 확인
    public boolean isMove() {
        int objectCode = objectPosition[clickedX_tmp][clickedY_tmp];

        //String str = "" + objectCode;
        //Toast myToast = Toast.makeText(MainActivity.this, str, Toast.LENGTH_SHORT);
        //myToast.show();

        boolean res = false;

        switch(objectCode) {
            case 1: res = isMoveRook(); break;        // rook move function();
            case 2: res = isMoveKnight(); break;      // knight move function();
            case 3: res = isMoveBishop(); break;      // bishop move function();
            case 4: res = isMoveQueen(); break;       // queen move function();
            case 5: res = isMoveKing(); break;        // king move function();
            case 6: res = isMoveWhitePawn(); break;   // white_pawn move function();
            case 7: res = isMoveWhitePawn();          // super_white_pawn move function();
                    objectPosition[getClickedX_tmp()][getClickedY_tmp()]  = 4;
                    break;
            case 8: res = isMoveWhitePawn(); break;   // first_white_pawn 2move function();
            case 9: res = isMoveRook();
                    objectPosition[getClickedX_tmp()][getClickedY_tmp()]  = 1;
                    break;
            case 10: res = isMoveKing(); break;       // 그냥 킹 움직임 일수도 있지만 캐슬링도 가능
            case -1: res = isMoveRook(); break;       // rook move function();
            case -2: res = isMoveKnight(); break;     // knight move function();
            case -3: res = isMoveBishop(); break;     // bishop move function();
            case -4: res = isMoveQueen(); break;      // queen move function();
            case -5: res = isMoveKing(); break;       // king move function();
            case -6: res = isMoveBlackPawn(); break;  // black_pawn move function();
            case -7: res = isMoveBlackPawn();         // super_black_pawn move function();
                     objectPosition[getClickedX_tmp()][getClickedY_tmp()]  = -4;
                     break;
            case -8: res = isMoveBlackPawn(); break;   // first_black_pawn 2move function();
            case -9: res = isMoveRook();
                     objectPosition[getClickedX_tmp()][getClickedY_tmp()]  = -1;
                     break;
            case -10: res = isMoveKing(); break;
            default : res = false; break;
        }

        return res;
    }

    // 기물마다 이동 가능한지 확인하는 함수
    public boolean isMoveRook() {
        int x = getClickedX_tmp();
        int y = getClickedY_tmp();
        int sum = 0;
        boolean res = false;

        if(x == clickedX && y == clickedY) { // 제자리 이동
            return false;
        }
        if(objectPosition[x][y] * objectPosition[clickedX][clickedY] > 0) { // 끝에 아군 기물
            return false;
        }
        if(x != clickedX && y != clickedY) { // 못움직이는 위치
            return false;
        }

        if(y == clickedY) { // 가로 이동
            if(x < clickedX) { // 오른쪽 이동
                for(int i=x+1; i<clickedX; i++) {
                    sum = sum + Math.abs(objectPosition[i][y]);
                }
            }
            else if(x > clickedX) { // 왼쪽 이동
                for(int i=clickedX+1; i<x; i++) {
                    sum = sum + Math.abs(objectPosition[i][y]);
                }
            }
        }
        else if(x == clickedX) { // 세로 이동
            if(y < clickedY) { // 아래 이동
                for(int i=y+1; i<clickedY; i++) {
                    sum = sum + Math.abs(objectPosition[x][i]);
                }
            }
            else if(y > clickedY) { // 위쪽 이동
                for(int i=clickedY+1; i<y; i++) {
                    sum = sum + Math.abs(objectPosition[x][i]);
                }
            }
        }

        if(sum > 0) { // 중간에 기물이 있으면
            res = false;
        }
        else if(sum == 0) { // 중간에 기물이 없으면
            res = true;
        }

        return res;
    }

    public boolean isMoveKnight() {
        int x = getClickedX_tmp();
        int y = getClickedY_tmp();
        int sum = 0;
        boolean res = false;

        if(x == clickedX && y == clickedY) { // 제자리 이동
            return false;
        }
        if(objectPosition[x][y] * objectPosition[clickedX][clickedY] > 0) { // 끝에 아군 기물
            return false;
        }

        sum = sum + Math.abs(clickedX - x);
        sum = sum + Math.abs(clickedY - y);

        if(sum == 3) {
            if(x != clickedX && y != clickedY) {
                res = true;
            }
        }

        return res;
    }

    public boolean isMoveBishop() {
        int x = getClickedX_tmp();
        int y = getClickedY_tmp();
        int sum = 0;
        boolean res = false;

        if(x == clickedX && y == clickedY) { // 제자리 이동
            return false;
        }
        if(objectPosition[x][y] * objectPosition[clickedX][clickedY] > 0) { // 끝에 아군 기물
            return false;
        }

        if(x < clickedX && y > clickedY && y-clickedY == clickedX-x) { // 오른쪽 대각선 위
            for(int i=1; i < y-clickedY; i++) {
                sum = sum + Math.abs(objectPosition[x+i][y-i]);
            }
        }
        else if(x < clickedX && y < clickedY && clickedY-y == clickedX-x) { // 오른쪽 대각선 아래
            for(int i=1; i < clickedY-y; i++) {
                sum = sum + Math.abs(objectPosition[x+i][y+i]);
            }
        }
        else if(x > clickedX && y > clickedY && y-clickedY == x-clickedX) { // 왼쪽 대각선 위
            for(int i=1; i < y-clickedY; i++) {
                sum = sum + Math.abs(objectPosition[x-i][y-i]);
            }
        }
        else if(x > clickedX && y < clickedY && clickedY-y == x-clickedX) { // 왼쪽 대각선 아래
            for(int i=1; i < clickedY-y; i++) {
                sum = sum + Math.abs(objectPosition[x-i][y+i]);
            }
        }
        else {
            sum = 1;
        }

        if(sum == 0) { // 중간에 기물이 없으면
            res = true;
        }

        return res;
    }

    public boolean isMoveQueen() {
        return (isMoveRook() || isMoveBishop());
    }

    public boolean isMoveKing() {
        int x = getClickedX_tmp();
        int y = getClickedY_tmp();
        int sum = 0;
        boolean res = false;

        if(x == clickedX && y == clickedY) { // 제자리 이동
            return false;
        }
        if(objectPosition[x][y] * objectPosition[clickedX][clickedY] > 0) { // 끝에 아군 기물
            // 움직이지 않은 킹이면
            // 끝에 있는 아군 기물이 움직이지 않은 룩이면
            // 중간에 기물이 없으면 castlingFlag = true; res true;
            if(Math.abs(objectPosition[x][y]) == 10 && Math.abs(objectPosition[clickedX][clickedY]) == 9) {
                if(x < clickedX) { // 오른쪽 이동
                    for(int i=x+1; i<clickedX; i++) {
                        sum = sum + Math.abs(objectPosition[i][y]);
                    }
                }
                else if(x > clickedX) { // 왼쪽 이동
                    for(int i=clickedX+1; i<x; i++) {
                        sum = sum + Math.abs(objectPosition[i][y]);
                    }
                }

                if(sum > 0) { // 중간에 기물이 있으면
                    res = false;
                }
                else if(sum == 0) { // 중간에 기물이 없으면
                    if(objectPosition[x][y] > 0) {
                        objectPosition[x][y] = 5;
                    }
                    else {
                        objectPosition[x][y] = -5;
                    }
                    castlingFlag = true;
                    res = true;
                }
            }

            return res;
        }

        if(Math.abs(clickedX - x) <= 1 && Math.abs(clickedY - y) <= 1) {
            if(objectPosition[x][y] > 0) {
                objectPosition[x][y] = 5;
            }
            else {
                objectPosition[x][y] = -5;
            }
            return true;
        }

        return res;
    }

    public boolean isMoveWhitePawn() {
        int x = getClickedX_tmp();
        int y = getClickedY_tmp();
        boolean res = false;

        if(x == clickedX && y == clickedY) { // 제자리 이동
            return false;
        }
        if(objectPosition[x][y] * objectPosition[clickedX][clickedY] > 0) { // 끝에 아군 기물 있을때
            return false;
        }

        if(y == 6 && clickedY == 4 && x == clickedX) { // 처음 2칸 움직일때
            objectPosition[x][y]  = 8;
            res = true;
        }
        else if(objectPosition[clickedX][clickedY] == 0 && y==clickedY+1 && x==clickedX) { // 1칸 앞으로
            objectPosition[x][y]  = 6;
            if(clickedY == 0) { // 끝까지 갔으면
                objectPosition[x][y]  = 7;
            }
            res = true;
        }
        else if(objectPosition[clickedX][clickedY] < 0 && y==clickedY+1 && Math.abs(x-clickedX)==1) { // 대각선 적 기물 공격
            objectPosition[x][y]  = 6;
            if(clickedY == 0) { // 끝까지 갔으면
                objectPosition[x][y]  = 7;
            }
            res = true;
        }
        else if(objectPosition[clickedX][clickedY+1] == -8) { // 앙 파상
            if(clickedX < clickedX_tmp) { // 왼쪽 앙 파상이면
                String str = "1";
                Toast myToast = Toast.makeText(MainActivity.this, str, Toast.LENGTH_SHORT);
                myToast.show();
                objectPosition[clickedX][clickedY+1] = 0;
                imgBtn[clickedY+1][clickedX].setImageResource(R.drawable.white);
            }
            else { // 오른쪽 앙 파상이면
                String str = "2";
                Toast myToast = Toast.makeText(MainActivity.this, str, Toast.LENGTH_SHORT);
                myToast.show();
                objectPosition[clickedX][clickedY+1] = 0;
                imgBtn[clickedY+1][clickedX].setImageResource(R.drawable.white);
            }
            res = true;
        }

        return res;
    }

    public boolean isMoveBlackPawn() {
        int x = getClickedX_tmp();
        int y = getClickedY_tmp();
        boolean res = false;

        if(x == clickedX && y == clickedY) { // 제자리 이동
            return false;
        }
        if(objectPosition[x][y] * objectPosition[clickedX][clickedY] > 0) { // 끝에 아군 기물
            return false;
        }

        if(y == 1 && clickedY == 3 && x == clickedX) { // 처음 2칸 움직일때
            objectPosition[x][y]  = -8;
            res = true;
        }
        else if(objectPosition[clickedX][clickedY] == 0 && y==clickedY-1 && x==clickedX) { // 1칸 앞으로
            objectPosition[x][y]  = -6;
            if(clickedY == 7) { // 끝까지 갔으면
                objectPosition[x][y]  = -7;
            }
            res = true;
        }
        else if(objectPosition[clickedX][clickedY] > 0 && y==clickedY-1 && Math.abs(x-clickedX)==1) { // 대각선 적 기물 공격
            objectPosition[x][y]  = -6;
            if(clickedY == 7) { // 끝까지 갔으면
                objectPosition[x][y]  = -7;
            }
            res = true;
        }
        else if(objectPosition[clickedX][clickedY-1] == 8) { // 앙 파상
            if(clickedX < clickedX_tmp) { // 왼쪽 앙 파상이면
                objectPosition[clickedX][clickedY-1] = 0;
                imgBtn[clickedY-1][clickedX].setImageResource(R.drawable.white);
            }
            else { // 오른쪽 앙 파상이면
                objectPosition[clickedX][clickedY-1] = 0;
                imgBtn[clickedY-1][clickedX].setImageResource(R.drawable.white);
            }
            res = true;
        }

        return res;
    }

    // 기물을 해당 위치로 이동하는 함수
    public void move() {
        int x = getClickedX_tmp();
        int y = getClickedY_tmp();
        int objectCode = 0;

        if(castlingFlag) {
            // 왼쪽이면
            // 킹 왼쪽 두칸 설정 기존 위치 초기화 (색깔별)
            // 룩 킹 오른쪽 설정 기존 위치 초기화
            // 오른쪽이면
            // 킹 오른쪽 두칸 설정 기존 위치 초기화
            // 룩 킹 왼쪽 설정 기존 위치 초기화
            if(objectPosition[x][y] > 0) { // 백색이면
                if(clickedX < x) { // 왼쪽이면
                    objectPosition[x-2][y] = 5;
                    imgBtn[y][x-2].setImageResource(R.drawable.white_king);
                    objectPosition[x][y] = 0;
                    imgBtn[y][x].setImageResource(R.drawable.white);

                    objectPosition[x-1][y] = 1;
                    imgBtn[y][x-1].setImageResource(R.drawable.white_rook);
                    objectPosition[x-4][y] = 0;
                    imgBtn[y][x-4].setImageResource(R.drawable.white);
                }
                else { // 오른쪽이면
                    objectPosition[x+2][y] = 5;
                    imgBtn[y][x+2].setImageResource(R.drawable.white_king);
                    objectPosition[x][y] = 0;
                    imgBtn[y][x].setImageResource(R.drawable.white);

                    objectPosition[x+1][y] = 1;
                    imgBtn[y][x+1].setImageResource(R.drawable.white_rook);
                    objectPosition[x+3][y] = 0;
                    imgBtn[y][x+3].setImageResource(R.drawable.white);
                }
            }
            else if(objectPosition[x][y] < 0) { // 흑색이면
                if(clickedX < x) { // 왼쪽이면
                    objectPosition[x-2][y] = -5;
                    imgBtn[y][x-2].setImageResource(R.drawable.black_king);
                    objectPosition[x][y] = 0;
                    imgBtn[y][x].setImageResource(R.drawable.white);

                    objectPosition[x-1][y] = -1;
                    imgBtn[y][x-1].setImageResource(R.drawable.black_rook);
                    objectPosition[x-4][y] = 0;
                    imgBtn[y][x-4].setImageResource(R.drawable.white);
                }
                else { // 오른쪽이면
                    objectPosition[x+2][y] = -5;
                    imgBtn[y][x+2].setImageResource(R.drawable.black_king);
                    objectPosition[x][y] = 0;
                    imgBtn[y][x].setImageResource(R.drawable.white);

                    objectPosition[x+1][y] = -1;
                    imgBtn[y][x+1].setImageResource(R.drawable.black_rook);
                    objectPosition[x+3][y] = 0;
                    imgBtn[y][x+3].setImageResource(R.drawable.white);
                }
            }
            castlingFlag = false;
        }
        else {
            objectPosition[clickedX][clickedY] = objectPosition[x][y];
            objectPosition[x][y] = 0;

            // blank (0)
            // white rook, knight, bishop, queen, king, pawn, superPawn, firstMovePawn, nonMoveRook, nonMoveKing (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
            // black rook, knight, bishop, queen, king, pawn, superPawn, firstMovePawn, nonMoveRook, nonMoveKing (-1, -2, -3, -4, -5, -6, -7, -8, -9, -10)
            switch(objectPosition[clickedX][clickedY]) {
                case 1: objectCode = R.drawable.white_rook; break;
                case 2: objectCode = R.drawable.white_knight; break;
                case 3: objectCode = R.drawable.white_bishop; break;
                case 4: objectCode = R.drawable.white_queen; break;
                case 5: objectCode = R.drawable.white_king; break;
                case 6: objectCode = R.drawable.white_pawn; break;
                case 7: objectCode = R.drawable.white_queen; break;
                case 8: objectCode = R.drawable.white_pawn; break;
                case -1: objectCode = R.drawable.black_rook; break;
                case -2: objectCode = R.drawable.black_knight; break;
                case -3: objectCode = R.drawable.black_bishop; break;
                case -4: objectCode = R.drawable.black_queen; break;
                case -5: objectCode = R.drawable.black_king; break;
                case -6: objectCode = R.drawable.black_pawn; break;
                case -7: objectCode = R.drawable.black_queen; break;
                case -8: objectCode = R.drawable.black_pawn; break;
            }
            imgBtn[clickedY][clickedX].setImageResource(objectCode);
            imgBtn[y][x].setImageResource(R.drawable.white);
        }
    }

    // 검은색 턴인지 백색 턴인지
    public boolean isTurn() {
        int x = getClickedX_tmp();
        int y = getClickedY_tmp();
        boolean res = false;

        if(turnColor == 1 && objectPosition[x][y] > 0) {
            res = true;
        }
        else if(turnColor == -1 && objectPosition[x][y] < 0) {
            res = true;
        }
        return res;
    }

    public void changeTurnColor(){
        if(turnColor == 1) {
            turnColor = -1;
        }
        else {
            turnColor = 1;
        }
    }
}