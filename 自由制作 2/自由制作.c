/*
製作者指名　さるの

*概要*
この作品は出現する敵を倒すミニゲームです。思いついた敵とかスキルをひたすら詰め込んでみた結果...。
プログラムを実行すると装備選択画面が開き、その次の画面で敵を選択してzキーを押すと戦闘が始まります。
勝敗が決した後、表示される画面でzキーを打つとウィンドウが閉じます。
また、戦闘中のチャットはターミナルに表示されます。

*操作方法*
qキー　スキル「ハイパーヒール」を発動。
wキー　スキル「大地の加護」を発動。
eキー　スキル「バーンアップ」を発動。
rキー　スキル「闇の裁き」を発動。
mキー　攻撃バーを止める。このバーの位置によって謎の生命体に与えるダメージが変わります。
cキー　プレイヤーの全スキルポイントを最大にする。発表用のチートコマンド。
zキー　勝敗が決定した後の画面で押すとウィンドウが閉じ、ゲームが終了する。敵選択画面で押すと選択している敵との戦闘を開始、装備選択画面で押すと選択している装備を装備する。
sキー　敵選択画面では対戦相手を変えることができ、装備選択画面では使う装備を変えることができる。
xキー　敵選択画面で押すと装備選択画面に戻ることができる。

*装備詳細*
 * 妖精のペンダント　プレイヤーのターンが終わった後、HPを50回復する
 * 竜玉の指輪　　　　攻撃力が1.25倍になる
 * コスモストーン　　スキル発動時に使うスキルポイントが1減る（ただし、ハイパーヒールはそのまま）

*キャラステータス
 *プレイヤー
  HP  1000
  ATK 100
 * 謎の生命体
   HP  3000
   ATK 50
 * 魔法生命体
   HP  6000
   ATK 80
 * ゴーレム
　  HP  10000
    ATK 400
 *イビルセル
    HP  2400
    ATK 50
 *究極生命体
   HP  15000
   ATK 100

*スキル説明*
 *プレイヤーのスキル
    * ハイパーヒール　緑のスキルポイントを1消費。プレイヤーの体力を300回復します。毒も治療できます。1ターン中に複数回使うこともできます。
    * 大地の加護　　　黄のスキルポイントを2消費。2ターンの間、敵の攻撃を防ぎます。ただし、一部のスキルは防げません。
    * バーンアップ　　赤のスキルポイントを3消費。敵にプレイヤーの攻撃力の3倍のダメージを与え、4ターンの間攻撃力を2倍にします(バーンアップの効果もダメージに反映されます)。ただし、攻撃力強化が反映されている間に攻撃できる機会は3回なので、実質3ターンです。
    * 闇の裁き　　　　敵にプレイヤーの攻撃力×10倍のダメージを与えます。バーンアップの効果も反映されるため、このプログラムの場合、与えるダメージは1000ダメージか2000ダメージになります。

 *謎の生命体のスキル
    * ヒール         通常状態時に使用。HPを200回復します。
    * スキルブレイク  怒り時に使用。プレイヤーのスキルポイントを0にします。
    * ヘルファイア　　怒り時に使用。プレイヤーに300ダメージを与えます。
    * ソウルブレイク　発狂時に使用。プレイヤーに600ダメージを与えます。なお、発狂状態になった最初のターンに確定で使用します。
 *魔法生命体のスキル
    * SPスティール　　　　   通常時に使用。プレイヤーのスキルポイントを全て奪い取ります。また、この後にエナジードレインを使ってくる場合もあります。　　
    * エナジードレイン　　　　通常時に使用。プレイヤーに100ダメージを与え、自分はHPを50回復します。
    * パワーロスト　　　　　　怒り移行時に使用。2ターンの間、プレイヤーの攻撃力を0にします。スキルによるダメージも通らないほか、バーンアップの攻撃力上昇効果が無効化されます。
    * エアロバレット　　　　　怒り時に使用。プレイヤーに200ダメージを与えます。
    * スティラクアス　　　　　怒り時に使用。プレイヤーに100ダメージを与えます。また、バーンアップを発動している場合は持続ターンを縮めます。
    * ポイズンミスト　　　　　怒り時に使用。プレイヤーを毒状態にします。
    * ブラインドダークネス　　発狂移行時に使用。画面を闇で覆い、攻撃バーが見える範囲が狭められます。自分の体力や枠、スキルの発動可否は見えます。
    * エレメンタルバースト　　発狂状態の時に使用。4ターンの間エネルギーをため、ため終わってから攻撃します。当たれば問答無用で即死、大地の加護も貫通します。
  * ゴーレムのスキル
    * ガードブレイク　　　　　怒り時に使用。プレイヤーに300ダメージを与えます。大地の加護を発動している場合、それを無効化すます。
    * パワーアップ　　　　　　発狂時に使用（移行時は確定で使用）。次のゴーレムの攻撃の威力を倍にします。
  * イビルセルのスキル
    * 毒攻撃　　　　　　　　　　通常時に使用。プレイヤーに25ダメージを与え、毒状態にします。
    * 猛毒攻撃　　　　　　　　　怒り時に使用。プレイヤーに50ダメージを与え、猛毒状態にします。
    * 麻痺毒攻撃　　　　　　　　発狂時に使用（移行時は確定で使用）。プレイヤーに100ダメージを与え、麻痺、猛毒状態にします。
    * 劇毒攻撃　　　　　　　　　発狂時に使用。プレイヤーに200ダメージを与え、劇毒状態にします。
  * 究極生命体のスキル
    * 猛毒の霧               通常時に使用。プレイヤーを猛毒状態にします。
    * ソウルイート　　　　　　　通常時に使用。プレイヤーに200ダメージを与え、自分はHPを100回復します。
    * デスゾーン　　　　　　　　怒り移行時に確定で使用。バーが通る道に紫の枠が現れます。この枠の位置にバーが止まると150ダメージを受けます。
    * SPバースト　　　　　　　　怒り時に使用。自分のSPを全て消費し、持ちSP×25ダメージを与えます。チートコマンドで得たSPを全部吸わせた後に使わせるととんでもないダメージが入ります。
    * SPスティール　　　　　　　怒り時に使用。効果は魔法生命体のものと同じ。
    * ブラインドダークネス　　　発狂移行時に使用。効果は魔法生命体のものと同じ。
    * ハイパーヒール　　　　　　発狂時に使用。HPを300回復します。

*プレイヤーの状態異常*
　*毒       毎ターンの終わりに50ダメージを受けます。スキル「ハイパーヒール」で治療できます。
　*猛毒     毎ターンの終わりに100ダメージを受けます。スキル「ハイパーヒール」で症状を弱め、毒状態にできます。
　*劇毒　　　毎ターンの終わりに300ダメージを受けます。スキル「ハイパーヒール」で症状を弱め、猛毒状態にできます。
　*麻痺　　　1ターンの間、行動できなくなります。ターン経過で治ります。
　*弱化　　　パワーロストによって起こる状態異常。プレイヤーの攻撃力が0になります。ターン経過で治ります。

*仕様*
    *ダメージはバーを止めた位置が真ん中に近いほど大きくなります。また、止めた枠の色によってもダメージが変わります（黒が最高火力、次いで赤、黄、緑の順）。
    *枠外にバーが止まった場合、敵にダメージがはいりません。
    *バーが別の色の枠に少しでもかすっていれば、その色と判定されます。
    *スキルポイントが足りない場合、スキルは発動できません。ただし、スキルポイントが足りない状態で誤ってキーを押しても、謎の生命体のターンにはなりません。


*/
#include "programs/parameters.h"

//ダメージを与えた時のメッセージ表示を楽にする関数
int ATKMessage(int e,int Damage){
    if(e == 0){
        printf("謎の生命体に%dダメージを与えた！\n",Damage);
    }
    if(e == 1){
        printf("魔法生命体に%dダメージを与えた！\n",Damage);
    }
    if(e == 2){
        printf("ゴーレムに%dダメージを与えた！\n",Damage);
    }
    if(e == 3){
        printf("イビルセルに%dダメージを与えた！\n",Damage);
    }
    if(e == 4){
        printf("究極生命体に%dダメージを与えた！\n",Damage);
    }
    if(e == 99){
        printf("???に%dダメージを与えた！\n",Damage);
    }
    return 0;
}
//敵を倒した時のメッセージ表示を楽にする関数
int BeatMessage(int e){
    if(e == 0){
        printf("謎の生命体を倒した！\n");
    }
    if(e == 1){
        printf("魔法生命体を倒した！\n");
    }
    if(e == 2){
        printf("ゴーレムを倒した！\n");
    }
    if(e == 3){
        printf("イビルセルを倒した！\n");
    }
    if(e == 4){
        printf("究極生命体を倒した！\n");
    }
    if(e == 99){
        printf("???を倒した！\n");
    }
    return 0;
}

int main() {
    doubleLayer layers;
    int x;//バーの位置変数
    int pushd;//プレイヤーの行動検出
    int z;//デスゾーン2
    int zz;//z調節
    int windowID;//ウィンドウ
    int layerID;//レイヤー
    int game;//起動判定
    int esl;//敵選択
    int eqsl;//装備選択
    int eqheal;//妖精のペンダントによる回復
    int eqSP;//コスモストーンによるSP補助
    int elementB;//スキルポイント（黒）
    int elementR;//スキルポイント（赤）
    int elementY;//スキルポイント（黄）
    int elementG;//スキルポイント（緑）
    int pb;//位置ボーナス
    int AD;//攻撃検出
    int HP;//体力
    int ATK;//攻撃力
    int ATKup;//攻撃強化
    int poison;//プレイヤーの毒判定
    int paralysis;//プレイヤーの麻痺判定
    double floating;//浮遊
    int floatingz;//浮遊調節
    double expand;//拡大
    int expandz;//拡大調節
    double darknessx;//闇のアニメーション(横)
    int darknessy;//闇のアニメーション（縦）

    int eHP;//敵の体力
    int eMax;//敵の体力最大値
    int eSP;//敵のスキルポイント
    int Scount;//敵のスキル反動
    int eATK;//敵の攻撃力
    int enemy_condition;//敵の状態　0で通常、1で怒り、2で発狂

    int lost;//パワーロストターン
    int darkness_flag;//ブラインドダークネス発動判定
    int deathcount;//エレメントバーストカウントダウン

    int gtc;//ゴーレムの攻撃管理
    int gATKup;//ゴーレムの攻撃倍率

    int zone;//デスゾーン発動検出

    int damage;//ダメージ表示用
    int guard;//大地の加護判定
    int burnup;//バーンアップ判定
    int wl;//画面判定　戦闘中は0、1で勝利、2で敗北 3はセレクト画面

    int secretcount;//秘密のコマンド
    int secret;//未知の世界か否か
    int healf;//生命の息吹判定
    int eguard;//敵大地の加護判定
    int eburnup;//敵バーンアップ判定
    int deathcount2;//破滅の黒炎
    int stop;//破滅を止める
    int ruinend;//破滅が終わった
    double acm;//真ん中のやつ出現
    double excm;//真ん中のやつ拡大
    double asubm;//サブ出現
    z = 0;
    zz = 0;
    game = 0;
    esl = 0;
    elementB = 0;
    elementR = 0;
    elementY = 0;
    elementG = 0;
    AD = 0;
    HP = 1000;
    ATK = 100;
    ATKup = 1;
    guard = 0;
    burnup = 0;
    pb = 0;
    eSP = 0;
    Scount = 0;
    enemy_condition = 0;
    damage = 0;
    wl = 5;
    lost = -1;
    poison = 0;
    darkness_flag = 0;
    deathcount = -1;
    gtc = 0;
    gATKup = 1;
    paralysis = -1;
    zone = 0;
    secretcount = 0;
    secret = 0;
    healf = 0;
    eguard = 0;
    eburnup = 0;
    deathcount2 = -1;
    stop = -1;
    ruinend = 0;
    floating = 0;
    floatingz = 0;
    expand = 0;
    expandz = 0;
    acm = 40;
    excm = 0;
    eqsl = 0;
    eqheal = 0;
    eqSP = 0;
    darknessx = 0;
    darknessy = 0;
    pushd = 0;
    srand((unsigned)time(NULL));//時間による変数のシード

    //起動
    HgOpen(ws,ws);
    layers = HgWAddDoubleLayer(windowID);
    HgWAddLayer(windowID);
    while(game == 0){
        HgSetEventMask(HG_KEY_DOWN|HG_KEY_DOWN);

        //バーの速度調節
        for (x = attackbar_startpoint;x <= attackbar_endpoint;x += attackbar_speed){
            if(x >= attackbar_endpoint){
                x = attackbar_startpoint;
            }
            darkness_animation(darkness_flag,&darknessx,&darknessy,darkness_border_x,darkness_border_y,darkness_speed_x,darkness_speed_y);
            deathzone_animation(&zz,&z,deathzone_max,deathzone_min,10);
            float_animation(&floatingz,&floating,floating_max,floating_min,0.2);
            expand_animation(&expandz,&expand,expand_max,expand_min,0.1,0.05);
            if(esl == 1){
                magiccircle_expand(enemy_condition,&asubm,&excm,30,30,1.5);
            }
            if(esl == 99&&eHP <= 500){
                magiccircle_expand2(&excm,&asubm,&acm,10,30,0,0.5,1.5,2);
            }

            //レイヤー設定
            int ln = HgLSwitch(&layers);
            HgLClear(layerID);
            HgLClear(ln);

////////////////グラフィック類
            //戦闘中
            HgWSetFont(ln,HG_G,12);
            if(wl == 0){
                if(secret == 1){
                    HgWSetFillColor(ln,HG_BLACK);
                    HgWBoxFill(ln,0,0,400,400,1);
                }
                HgWSetColor(ln,HG_BLACK);  
                if(esl == 0){                                 
                    unknown_creature_graphic(enemy_condition,ln,floating);
                }
                if(esl == 1){
                    magical_creature_graphic(enemy_condition,ln,floating,asubm,excm);
                }
                if(esl == 2){
                    golem_graphic(enemy_condition,ln);
                }
                if(esl == 3){
                    evil_cell_graphic(enemy_condition,ln,expand);
                }
                if(esl == 4){
                    ultimate_creature_graphic(enemy_condition,ln,floating);
                }
                if(esl == 99){
                    Noname_graphic(eHP,eMax,ln,asubm,excm,acm);
                }
                enemy_HPbar(ln,eHP,eMax);
                //攻撃バー
                attackbar(ln,x,secret);
                darkness(ln,darknessx,darknessy,darkness_flag);
                attack_field(ln);
                deathzone(ln,eHP,eMax,z,zone);
                player_HPbar(ln,HP,secret);
                //スキルポイント
                skill_icon(25,25,HG_GREEN,ln,elementG,1,secret);
                skill_icon(125,25,HG_YELLOW,ln,elementY,2-eqSP,secret);
                skill_icon(225,25,HG_RED,ln,elementR,3-eqSP,secret);
                skill_icon(325,25,HG_BLACK,ln,elementB,3-eqSP,secret);
                //バフデバフアイコン
                grandguard_icon(ln,guard);
                burnup_icon(ln,burnup);
                powerlost_icon(ln,lost);
                poison_icon(ln,poison);
            }
            //勝利画面           
            if(wl == 1){
                win(ln,&secret);
            }
            //敗北画面
            if(wl == 2){
                lose(ln);
            }
            //敵選択画面
            if(wl == 3){
                select_enemy(ln,esl);
            }
            //未知の世界
            if(wl == 4){
                seclet_stage_enter(ln);
            }
            //装備選択画面
            if(wl == 5){
                select_equipment(ln, eqsl);
            }

            //キーボードを押した時の処理
            hgevent *event = HgEventNonBlocking();
            if (event !=  NULL){
                if (event->type == HG_KEY_DOWN){
/////////////発表用のチートコマンド　全スキルポイントを最大にする///////////
                    if(event->ch == 'c'){
                        elementB = 100;
                        elementR = 100;
                        elementY = 100;
                        elementG = 100;
                    }
////////////////敵選択キー///////////////
                    if(event->ch == 's'&&wl == 3){
                        if(esl == 4){
                            esl = 0;
                            break;
                        }
                        if(esl >= 0){
                            esl++;
                            break;
                        }
                    }
////////////////装備選択キー///////////////
                    if(event->ch == 's'&&wl == 5){
                        if(eqsl == 2){
                            eqsl = 0;
                            break;
                        }
                        if(eqsl >= 0){
                            eqsl++;
                            break;
                        }
                    }
////////////////元の世界に戻る///////////////
                    if(event->ch == 's'&&wl == 4){
                        wl = 3;
                        secretcount = 0;
                    }
//////////////装備選択決定キー//////////////
                    if(event->ch == 'z'&&wl == 5){
                        wl = 3;
                        break;
                    }
//////////////装備選択に戻るキー//////////////
                    if(event->ch == 'x'&&wl == 3){
                        wl = 5;
                        break;
                    }
//////////////選択決定キー　選択した敵との戦闘を開始する///////////////
                    if(event->ch == 'z'&&wl == 3){
                        //装備の影響もここで反映する
                        if(eqsl == 0){
                            eqheal = 1;
                        }
                        if(eqsl == 1){
                            ATK = ATK*1.25;
                        }
                        if(eqsl == 2){
                            eqSP = 1;
                        }
                        if(esl == 0){
                            eHP = 3000;
                            eMax = 3000;
                            eATK = 50;
                            printf("謎の生命体が現れた！\n");
                        }
                        if(esl == 1){
                            eHP = 6000;
                            eMax = 6000;
                            eATK = 80;
                            printf("魔法生命体が現れた！\n");
                        }
                        if(esl == 2){
                            eHP = 10000;
                            eMax = 10000;
                            eATK = 400;
                            printf("ゴーレムが現れた！\n");
                        }
                        if(esl == 3){
                            eHP = 2400;
                            eMax = 2400;
                            eATK = 50;
                            printf("イビルセルが現れた！\n");
                            printf("イビルセルは不意打ちを仕掛けてきた！\n");
                            printf("プレイヤーは毒を負った！\n");
                            poison = 1;
                        }
                        if(esl == 4){
                            eHP = 15000;
                            eMax = 15000;
                            eATK = 100;
                            printf("究極生命体が現れた！\n");
                        }
                        wl = 0;
                        break;
                    }
//////////////未知の世界へ///////////////
                    if(event->ch == 'z'&&wl == 4){
                        if(eqsl == 0){
                            eqheal = 1;
                        }
                        if(eqsl == 1){
                            ATK = ATK*1.25;
                        }
                        if(eqsl == 2){
                            eqSP = 1;
                        }
                        wl = 0;
                        secret = 1;
                        esl = 99;
                        eHP = 99;
                        eMax = 99999;
                        eATK = 130;
                        printf("???が現れた！\n");
                        printf("\n");
                        printf("「...コンナトコロニコレルナンテ\n");
                        printf("アナタハトテモツヨイヒトナンデスネ。\n");
                        printf("チョウドタイクツシテイタノデス。\n");
                        printf("イッショニアソビマショウ。\n");
                        printf("...チョットグライハタノシマセテクダサイネ？」\n");
                        printf("\n");
                        printf("???がスキル「ソウルスプリット」を使った！\n");
                        printf("魂が引き裂かれる...！\n");
                        printf("HPが半分になった！\n");
                        HP = 500;
                    }
///////////////勝利or敗北画面の時、ゲームを終了させる///////////
                    if(event->ch == 'z'&&(wl == 1||wl == 2)){
                        if(esl == 4&&wl == 1){
                            printf("\n");
                            printf("敵選択画面でuを押し続けると...?\n");
                        }
                        game = 1;
                        break;
                    }
////////////////隠しコマンド//////////////
                    if(event->ch == 'u'&&wl == 3){
                        secretcount++;
                        if(secretcount>20){
                            wl = 4;
                        }
                    }
/////////////スキル//////////
////////////緑（ハイパーヒール）　SP1//////////////
                    if(event->ch == 'q'&&wl == 0&&pushd == 0){
                        Hyperheal(&elementG,&HP,300,player_MaxHP,&poison);
                        break;
                    }
                    //黄（大地の加護）　SP2
                    if(event->ch == 'w'&&wl == 0&&pushd == 0){
                        pushd = 1;
                        if(elementY >= 2-eqSP){
                            printf("スキル発動！「大地の加護」\n");
                            printf("大地の精霊がプレイヤーを守る！\n");
                            //SPを使って２ターンの間バリアを張る
                            elementY = elementY-2+eqSP;
                            guard = 2;
                            AD = 1;
                        }
                        //足りない場合
                        else{
                            printf("スキルポイントが不足しています。\n");
                        }
                        break;
                    }
                    //赤（バーンアップ）　SP３
                    if(event->ch == 'e'&&wl == 0&&pushd == 0){
                        pushd = 1;
                        if(elementR >= 3-eqSP){
                            printf("スキル発動！「バーンアップ」\n");
                            printf("炎の精霊が、灼熱の炎で相手を攻撃した！\n");
                            elementR = elementR-3+eqSP;
                            //防がれる場合
                            if(eguard>0){
                                printf("大地の精霊に攻撃を防がれた！\n");
                                AD = 1;
                            }
                            //防がれない場合
                            else{
                                //この攻撃で倒し切れない場合、ダメージを与える
                                ATKMessage(esl,ATK*ATKup*3);
                                //破滅を止める
                                if(stop>-1){
                                    if(stop-ATK*3>0){
                                        stop = stop-ATK*3;
                                    }
                                    else{
                                        stop = 0;
                                    }
                                }
                                if(eHP-ATK*3>0){
                                    eHP = eHP-ATK*3;
                                    printf("炎の精霊がプレイヤーに力を与えた！\n");
                                    //４ターンの間(攻撃上昇が反映されるのは実質３ターン)攻撃力を2倍にする
                                    burnup = 4;
                                    ATKup = 2;
                                    AD = 1;
                                }
                                //この攻撃で倒しきれる場合、とどめをさしてゲームを終わらせる
                                if(eHP-ATK*3 <= 0){
                                    BeatMessage(esl);
                                    eHP = 0;
                                    wl = 1;
                                }
                            }
                        }
                        //足りない場合
                        else{
                            printf("スキルポイントが不足しています。\n");
                        }
                        break;
                    }
///////////////黒（闇の裁き）　３SP///////////////
                    if(event->ch == 'r'&&wl == 0&&pushd == 0){
                        pushd = 1;
                        if(elementB >= 3-eqSP){
                            elementB = elementB-3+eqSP;
                            printf("スキル発動！「闇の裁き」\n");
                            printf("悪魔が相手の魂を蝕んだ！\n");
                            //防がれる場合
                            if(eguard>0){
                                printf("大地の精霊に攻撃を防がれた！\n");
                                AD = 1;
                                break;
                            }
                            //防がれない場合
                            else{
                                //この攻撃で倒し切れない場合、現在の攻撃力（バーンアップでの増加分含む）の１０倍ダメージを与える
                                ATKMessage(esl,ATK*ATKup*10);
                                //破滅を止める
                                if(stop>-1){
                                    if(stop-ATK*ATKup*10>0){
                                        stop = stop-ATK*ATKup*10;
                                    }
                                    else{
                                        stop = 0;
                                    }
                                }
                                if(eHP-ATK*ATKup*10>0){
                                    eHP = eHP-ATK*ATKup*10;
                                    AD = 1;
                                    break;
                                }
                                //倒しきれる場合、トドメをさしてゲームを終わらせる
                                if(eHP-ATK*ATKup*10 <= 0){
                                    BeatMessage(esl);
                                    wl = 1;
                                    eHP = 0;
                                }
                            }

                        }
                        //足りない場合
                        else{
                            printf("スキルポイントが不足しています。\n");
                        }
                        break;
                    }
/////////////通常攻撃///////////////////
                    //計算式は、(攻撃力+(位置ボーナス*位置倍率))*倍率*攻撃上昇値
                    if(event->ch == 'm'&&wl == 0&&pushd == 0){
                        pushd = 1;
                        //デスゾーン
                        if(zone == 1&&((x >= 100+z&&x <= 150+z)||(x >= 250+z&&x <= 300+z))){
                            printf("デスゾーンに触れてしまった！\n");
                            printf("プレイヤーに150ダメージ！\n");
                            if(HP>150){
                                HP = HP-150;
                            }
                            else{
                                printf("プレイヤーは力尽きた...。\n");
                                HP = 0;
                                wl = 2;
                                break;
                            }
                        }
                        //???のデスゾーン
                        if(zone == 2&&((x >= 0&&x <= z)||(x >= 390-z&&x <= 390))){
                            printf("デスゾーンに触れてしまった！\n");
                            //第一〜第四形態                    
                            if(eHP>eMax/3){
                                printf("プレイヤーは麻痺してしまった...。\n");
                                paralysis = 1;
                            }
                            //第五形態
                            if(eMax/6<eHP&&eHP <= eMax/3){
                                if(poison == 3){
                                    printf("プレイヤーに100ダメージ！\n");
                                if(HP>100){
                                    HP = HP-100;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;
                                    wl = 2;
                                    }
                                }
                                if(0<poison&&poison<3){
                                    poison++;
                                    printf("毒が強力になった...。\n");
                                }
                                if(poison == 0){
                                    poison = 1;
                                    printf("プレイヤーは毒に侵された...。\n");
                                }
                            }
                            //第六形態
                            if(500<eHP&&eHP <= eMax/6){
                                printf("プレイヤーに150ダメージ！\n");
                                if(HP>150){
                                    HP = HP-150;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;
                                    wl = 2;
                                    break;
                                }
                            }
                            //第七形態
                            if(eHP <= 500){
                                printf("プレイヤーにとてつもないダメージ！\n");
                                printf("プレイヤーは力尽きた...。\n");
                                HP = 0;
                                wl = 2;
                                break;
                            }
                        }
                        //どれだけ中心に近いか計測
                        pb = abs(200-x);
                        printf("プレイヤーの攻撃！\n");
                        //防がれる場合
                        if(eguard>0){
                            printf("大地の精霊に攻撃を防がれた！\n");
                            AD = 1;
                            break;
                        }
                        else{
                            //黒ゾーン　倍率２倍　位置倍率0.5倍
                            if(x >= 190&&x <= 205){
                                damage = (ATK+0.5*(200-pb))*2*ATKup;
                                if (elementB<100){
                                    printf("黒のスキルポイントが増加した！\n");
                                    elementB++;
                                }
                                ATKMessage(esl,damage);
                                //破滅を止める
                                if(stop>-1){
                                    if(stop-damage>0){
                                        stop = stop-damage;
                                    }
                                    else{
                                        stop = 0;
                                    }
                                }
                                if (eHP-damage>0){
                                    eHP = eHP-damage;
                                    AD = 1;
                                    break;
                                }
                                if (eHP-damage <= 0){
                                    BeatMessage(esl);
                                    eHP = 0;
                                    wl = 1;
                                }
                            }
                            //赤ゾーン　倍率1.25倍　位置倍率0.3倍
                            if((x >= 155&&x<190)||(x <= 240&&x>205)){
                                damage = (ATK+0.3*(200-pb))*1.25*ATKup;
                                if (elementR<100){
                                    printf("赤のスキルポイントが増加した！\n");
                                    elementR++;
                                }
                                ATKMessage(esl,damage);
                                //破滅を止める
                                if(stop>-1){
                                    if(stop-damage>0){
                                        stop = stop-damage;
                                    }
                                    else{
                                        stop = 0;
                                    }
                                }
                                if (eHP-damage>0){
                                    eHP = eHP-damage;
                                    AD = 1;
                                    break;
                                }
                                if (eHP-damage <= 0){
                                    BeatMessage(esl);
                                    eHP = 0;
                                    wl = 1;
                                }
                            }
                            //黄ゾーン　倍率１倍　位置倍率0.2倍
                            if((x >= 95&&x<155)||(x <= 300&&x>240)){
                                damage = (ATK+0.2*(200-pb))*ATKup;
                                if (elementY<100){
                                    printf("黄のスキルポイントが増加した！\n");
                                    elementY++;
                                }
                                ATKMessage(esl,damage);
                                //破滅を止める
                                if(stop>-1){
                                    if(stop-damage>0){
                                        stop = stop-damage;
                                    }
                                    else{
                                        stop = 0;
                                    }
                                }
                                if (eHP-damage>0){
                                    eHP = eHP-damage;
                                    AD = 1;
                                    break;
                                }
                                if (eHP-damage <= 0){
                                    BeatMessage(esl);
                                    eHP = 0;
                                    wl = 1;
                                }
                            }
                            //緑ゾーン　倍率0.75倍　位置倍率0.1倍
                            if((x >= 5&&x<95)||(x <= 390&&x>300)){
                                damage = (ATK+0.1*(200-pb))*0.75*ATKup;
                                if (elementG<100){
                                    printf("緑のスキルポイントが増加した！\n");
                                    elementG++;
                                }
                                ATKMessage(esl,damage);
                                //破滅を止める
                                if(stop>-1){
                                    if(stop-damage>0){
                                        stop = stop-damage;
                                    }
                                    else{
                                        stop = 0;
                                    }
                                }
                                if (eHP-damage>0){
                                    eHP = eHP-damage;
                                    AD = 1;
                                    break;
                                }
                                if (eHP-damage <= 0){
                                    BeatMessage(esl);
                                    eHP = 0;
                                    wl = 1;
                                }
                            }
                        }
                        //外した場合
                        if(x<5||x>390){
                            printf("しかし攻撃は外れた！\n");
                            AD = 1;
                        }
                        pushd = 1;
                        pb = 0;
                        break;
                    }
                }
            }

/////////////敵のターンの処理//////////////
            if(AD == 1){
                if(eqheal == 1&&HP != player_MaxHP){
                    printf("ペンダントの魔力がプレイヤーを癒す！\n");
                    player_heal(&HP,50,player_MaxHP);
                }
                //毒の処理
                if(poison == 1){
                    printf("プレイヤーは毒で50ダメージを受けた！\n");
                    if(HP>50){
                        HP = HP-50;
                    }
                    else{
                        printf("プレイヤーは力尽きた...。\n");
                        HP = 0;
                        wl = 2;
                    }
                }
                //猛毒の処理
                if(poison == 2){
                    printf("プレイヤーは毒で100ダメージを受けた！\n");
                    if(HP>100){
                        HP = HP-100;
                    }
                    else{
                        printf("プレイヤーは力尽きた...。\n");
                        HP = 0;
                        wl = 2;
                    }
                }
                //劇毒の処理
                if(poison >= 3){
                    printf("プレイヤーは毒で300ダメージを受けた！\n");
                    if(HP>300){
                        HP = HP-300;
                    }
                    else{
                        printf("プレイヤーは力尽きた...。\n");
                        HP = 0;
                        wl = 2;
                    }
                }
                //謎の生命体の状態を操作
                if(esl == 0){
                    //怒り状態(HP半分以下)
                    if((eHP <= eMax/2&&eHP>eMax/6)&&enemy_condition<1){
                        printf("謎の生命体が怒り状態になった！\n");
                        enemy_condition = 1;
                    }
                    //発狂状態（HP6分の1以下）
                    if (eHP <= eMax/6&&enemy_condition<2){
                        printf("謎の生命体が狂気に飲まれていく...！\n");
                        enemy_condition = 2;
                        Scount = 0;
                    }
                }
                //魔法生命体の状態を操作
                if(esl == 1){
                    //怒り状態
                    if ((eHP>eMax/6&&eHP <= eMax/2)&&enemy_condition<1){
                        printf("魔法生命体が怒り状態になった！\n");
                        enemy_condition = 1;
                        Scount = 0;
                    }
                    //発狂状態
                    if(eHP <= eMax/6&&enemy_condition<2){
                        printf("魔法生命体が狂気に飲まれていく...！\n");
                        enemy_condition = 2;
                        Scount = 0;
                    }
                }
                //ゴーレムの生命体の状態を操作
                if(esl == 2){
                    //怒り状態(HP半分以下)
                    if((eHP <= eMax/2&&eHP>eMax/6)&&enemy_condition<1){
                        printf("ゴーレムが怒り状態になった！\n");
                        enemy_condition = 1;
                        if(gtc>3){
                            printf("ゴーレムは力ずくで体勢を立て直した！\n");
                            gtc = 1;
                        }
                    }
                    //発狂状態（HP6分の1以下）
                    if (eHP <= eMax/6&&enemy_condition<2){
                        printf("ゴーレムが狂気に飲まれていく...！\n");
                        enemy_condition = 2;
                        if(gtc>3){
                            printf("ゴーレムは力ずくで体勢を立て直した！\n");
                            gtc = 1;
                        }
                    }
                }
                //イビルセルの状態を操作
                if(esl == 3){
                    //怒り状態(HP半分以下)
                    if((eHP <= eMax/2&&eHP>eMax/6)&&enemy_condition<1){
                        printf("イビルセルが怒り状態になった！\n");
                        enemy_condition = 1;
                    }
                    //発狂状態（HP6分の1以下）
                    if (eHP <= eMax/6&&enemy_condition<2){
                        printf("イビルセルが狂気に飲まれていく...！\n");
                        enemy_condition = 2;
                    }
                }
                //究極生命体の状態を操作
                if(esl == 4){
                    //怒り状態
                    if ((eHP <= eMax/2&&eHP>eMax/6)&&enemy_condition<1){
                        printf("究極生命体が怒り状態になった！\n");
                        printf("究極生命体がスキル「デスゾーン」を発動した！\n");
                        zone = 1;
                        printf("デスゾーンが展開された！\n");
                        enemy_condition = 1;
                        Scount = 2;
                    }
                    //発狂状態
                    if(eHP <= eMax/6&&enemy_condition<2){
                        printf("究極生命体が狂気に飲まれていく...！\n");
                        printf("魔法生命体がスキル「ブラインドダークネス」を発動した！\n");
                        printf("漆黒の闇が視界を覆う...!\n");
                        darkness_flag = 1;
                        enemy_condition = 2;
                        Scount = 4;
                    }
                }
                //???の状態を操作
                if(esl == 99){
                    //怒り状態
                    if ((eHP <= eMax/2&&eHP>eMax/6)&&enemy_condition<1){
                        printf("\n");
                        printf("「ヘエ...ナカナカヤリマスネ。\n");
                        printf("デハ、スコシダケホンキヲダストシマショウ。」\n");
                        printf("\n");
                        printf("???がスキル「デスゾーン」を発動した！\n");
                        zone = 2;
                        printf("デスゾーンが展開された！\n");
                        enemy_condition = 1;
                        Scount = 2;
                    }
                    //発狂状態
                    if(eHP <= eMax/6&&enemy_condition<2){
                        printf("\n");
                        printf("「...オモシロイ。」\n");
                        printf("\n");
                        printf("???がスキル「バーンアップ」を発動した！\n");
                        printf("炎の精霊が、灼熱の炎でプレイヤーを攻撃した！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                            else{
                                printf("プレイヤーに%dダメージ！\n",eATK*3);
                                if(HP-eATK*3>0){
                                    HP = HP-eATK*3;
                                    printf("炎の精霊が???に力を与えた！\n");
                                    eburnup = 4;
                                    gATKup = 2;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;                            
                                    wl = 2;
                                }
                            }
                        enemy_condition = 2;
                        Scount = 12;
                    }
                }
                //反動ターンを減らす
                if (Scount>0){
                    Scount--;
                }
                //敵のスキルポイント増加
                //敵が通常状態なら+1、怒り状態なら+3、発狂状態なら無限
                if (enemy_condition == 0){
                    eSP = eSP+1;
                }
                if (enemy_condition == 1){
                    eSP = eSP+3;
                }
                if (enemy_condition == 2){
                    eSP = 99999;
                }
                //エレメンタルバーストの処理＆カウントダウン減少
                if(deathcount == 0){
                    printf("魔法生命体がスキル「エレメンタルバースト」を発動した！\n");
                    printf("解き放たれたエネルギーがあたり一帯を吹き飛ばした！\n");
                    printf("プレイヤーにとてつもないダメージ！\n");
                    printf("プレイヤーは力尽きた...。\n");
                    HP = 0;
                    wl = 2;
                }
                if(deathcount>0){
                    printf("魔法生命体はエネルギーをためている...。\n");
                    deathcount--;
                    AD = 0;
                }
                //破滅を止める
                if(stop == 0){
                    printf("エネルギーが暴発し、スキルは不発に終わった！\n");
                    printf("???に1000ダメージ！\n");
                    eHP = eHP-1000;
                    stop = -1;
                    deathcount2 = -1;
                    ruinend = 1;
                }
                //破滅の黒炎の処理＆カウントダウン減少
                if(deathcount2 == 0){
                    printf("???がスキル「破滅の黒炎」を発動した！\n");
                    if(guard>0){
                        printf("大地の精霊が攻撃を防いだ！\n");
                        stop = -1;
                        deathcount2 = -1;
                        ruinend = 1;
                    }
                    else{
                        printf("全てが灰になっていく...！\n");
                        printf("プレイヤーにとてつもないダメージ！\n");
                        printf("プレイヤーは力尽きた...。\n");
                        HP = 0;
                        wl = 2;
                        ruinend = 1;
                    }
                }
                if(deathcount2>0){
                    printf("???はエネルギーをためている...。\n");
                    deathcount2--;
                }
                //パワーロストの処理＆持続ターン減少
                if(lost == 0){
                    printf("攻撃力が元に戻った！\n");
                    ATKup = 1;
                    lost = -1;
                    if(eqsl == 1){
                        ATK = 125;
                    }
                    else{
                    ATK = 100;
                    }
                }
                if(lost>0){
                    lost--;
                    if(burnup>0){
                        printf("闇の魔力が炎の精霊の力をかき消した！\n");
                    }
                    burnup = 0;
                    ATKup = 0;
                }
                

/////////////謎の生命体の行動////////////////
                if(esl == 0){
                    //通常時
                    if (enemy_condition == 0){
                        //SP不足、または体力が十分にある場合、通常攻撃を使う
                        if (eSP<3||eHP>2850){
                            printf("謎の生命体の攻撃！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                            else{
                                printf("プレイヤーに%dダメージ！\n",eATK);
                                if(HP-eATK>0){
                                    HP = HP-eATK;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;
                                    wl = 2;
                                }
                            }
                        }
                        //謎の生命体のSPが３以上かつ謎の生命体のHPが2850以下なら回復スキルを使う
                        if (eSP >= 3&&eHP <= 2850){
                            printf("謎の生命体がスキル「ヒール」を発動した！\n");
                            //全回復できる場合
                            if (eHP+200>eMax){
                                eHP = eMax;
                                printf("謎の生命体のHPが満タンになった！\n");
                            }
                            //そうでない場合
                            else{
                                eHP = eHP+200;
                                printf("謎の生命体のHPが200回復した！\n");
                            }
                            //スキルポイントを減らす
                            eSP = eSP-3;
                        }
                    }
                    //怒り時
                    if (enemy_condition == 1){
                        if (eSP >= 5){
                            //謎の生命体のSPが5以上かつこちらがスキル発動寸前の場合、弱化スキルを使う
                            if (Scount == 0&&(elementB >= 2||elementR >= 2||elementY >= 1||elementG >= 1)){
                                elementB = 0;
                                elementR = 0;
                                elementY = 0;
                                elementG = 0;
                                printf("謎の生命体がスキル「スキルブレイク」を発動した！\n");
                                printf("全てのスキルポイントが0になった...。\n");
                                Scount = 5;
                                eSP = eSP-5;
                            }
                            //そうでない場合、強攻撃を行う
                            else{
                                printf("謎の生命体がスキル「ヘルファイア」を発動した！\n");
                                if(guard>0){
                                    printf("大地の精霊が攻撃を防いだ！\n");
                                }
                                else{
                                    printf("地獄の業火がプレイヤーを襲う！\n");
                                    printf("プレイヤーに300ダメージ！\n");
                                    if(HP-300>0){
                                        HP = HP-300;
                                    }
                                    else{
                                        printf("プレイヤーは力尽きた...。\n");
                                        HP = 0;
                                        wl = 2;
                                    }
                                }
                                eSP = eSP-5;
                            }                        
                        }
                        //スキルポイントが足りない場合、通常攻撃を行う（威力は通常時の２倍）
                        else{
                            printf("謎の生命体の攻撃！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                            else{
                                printf("プレイヤーに%dダメージ！\n",eATK*2);
                                if(HP-eATK*2>0){
                                    HP = HP-eATK*2;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;
                                    wl = 2;
                                }
                            }
                        }
                    }
                    //発狂時
                    if (enemy_condition == 2){
                        //反動０の場合、特大ダメージの攻撃を行う
                        if(Scount == 0){
                            printf("謎の生命体がスキル「ソウルブレイク」を使った！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                            else{
                                printf("魂が蝕まれていく...！\n");
                                printf("プレイヤーに600ダメージ！\n");
                                if(HP-600>0){
                                    HP = HP-600;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;
                                    wl = 2;
                               }
                               Scount = 3;
                            }
                        }
                        //そうでない場合、通常攻撃を行う（威力は通常の３倍）
                        else{
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                                else{
                                printf("謎の生命体の攻撃！\n");
                                printf("プレイヤーに%dダメージ！\n",eATK*3);
                                if(HP-eATK*3>0){
                                    HP = HP-eATK*3;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;
                                    wl = 2;
                                }
                            }
                        }
                    }
                }

//////////////魔法生命体の行動///////////////////
                if(esl == 1){
                    if(enemy_condition == 0){
                        //魔法生命体のSPが3以上の時
                        if(eSP<5){
                            //プレイヤーの合計SPが3以上かつ魔法生命体のSPが5未満の場合、それを奪う
                            if(elementB+elementY+elementR+elementG >= 3&&Scount == 0){
                                printf("魔法生命体がスキル「SPスティール」を使った！\n");
                                printf("スキルポイントを全て奪われた...。\n");
                                eSP = eSP+elementB+elementY+elementR+elementG;
                                elementB = 0;
                                elementR = 0;
                                elementY = 0;
                                elementG = 0;
                                Scount = 5;
                            }
                            //それ以外の場合、通常攻撃を行う
                            else{
                                printf("魔法生命体の攻撃！\n");
                                if(guard>0){
                                    printf("大地の精霊が攻撃を防いだ！\n");
                                }
                                else{
                                    printf("プレイヤーに%dダメージ！\n",eATK);
                                    if(HP-eATK>0){
                                        HP = HP-eATK;
                                    }
                                    else{
                                        printf("プレイヤーは力尽きた...。\n");
                                        HP = 0;                            
                                        wl = 2;
                                    }
                                }
                            }
                        }
                        //魔法生命体のSPが5以上の場合、吸収攻撃を行う
                        if(eSP >= 5&&Scount != 5){
                            eSP = eSP-5;
                            printf("魔法生命体がスキル「エナジードレイン」を使った！\n");
                            if(guard>0){
                                    printf("大地の精霊が攻撃を防いだ！\n");
                                }
                            else{
                                printf("プレイヤーの生命力を吸収する！\n");
                                printf("プレイヤーに100ダメージ！\n");
                                if(HP>100){
                                    HP = HP-100;
                                    if(eHP+50<eMax){
                                        eHP = eHP+50;
                                        printf("魔法生命体のHPが50回復した！\n");
                                    }
                                    else{
                                        eHP = eMax;
                                        printf("魔法生命体のHPが満タンになった！\n");
                                    }
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;
                                    wl = 2;
                                }
                            }
                        }
                    }
                    //怒り状態
                    if(enemy_condition == 1){
                        //怒り状態に移行した際、プレイヤーの攻撃力を0にする
                        if(Scount == 0){
                            printf("魔法生命体がスキル「パワーロスト」を発動した！\n");
                            printf("闇の魔力がプレイヤーの力を奪う！\n");
                            Scount = 15;
                            ATK = 0;
                            ATKup = 0;
                            burnup = 0;
                            lost = 1;
                            eSP = 0;
                        }
                        if(eSP >= 6){
                            //SPが６以上かつプレイヤーがすでに毒を負っている場合、普通に攻撃する
                            if(poison == 1){
                                eSP = eSP-6;
                                printf("魔法生命体がスキル「エアロバレッジ」を発動した！\n");
                                if(guard>0){
                                    printf("大地の精霊が攻撃を防いだ！\n");
                                }
                                else{
                                    printf("風の弾丸がプレイヤーを襲う！\n");
                                    printf("プレイヤーに250ダメージ！\n");
                                    if(HP>250){
                                        HP = HP-250;
                                    }
                                    else{
                                        printf("プレイヤーは力尽きた...。\n");
                                        HP = 0;
                                        wl = 2;
                                    }
                                }

                            }
                            //毒でない場合は毒にする
                            if(poison == 0){
                                eSP = eSP-6;
                                printf("魔法生命体がスキル「ポイズンミスト」を発動した！\n");
                                if(guard>0){
                                    printf("大地の精霊が攻撃を防いだ！\n");
                                }
                                else{
                                    printf("プレイヤーは毒に侵された...。\n");
                                    poison = 1;
                                }
                            }
                        }
                        //魔法生命体のSPが2以上の時、バーンアップの効果を弱める攻撃を使う
                        if(eSP>2){
                            eSP = eSP-2;
                            printf("魔法生命体がスキル「スティラクアス」を発動した！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                                else{
                                printf("プレイヤーに100ダメージ！\n");
                                if(burnup>0){
                                    burnup--;
                                    printf("水の力が炎の力を弱めた！\n");
                                }
                                if(HP>100){
                                    HP = HP-100;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;
                                    wl = 2;
                                }
                            }
                        }
                    }
                    //発狂状態
                    if(enemy_condition == 2){
                        if(Scount>500){
                            printf("魔法生命体はエネルギーを貯め始めた！\n");
                            deathcount = 3;
                            Scount = 30;
                        }                        
                        if(Scount == 0){
                            printf("魔法生命体がスキル「ブラインドダークネス」を発動した！\n");
                            printf("漆黒の闇が視界を覆う...!\n");
                            darkness_flag = 1;
                            Scount = 9999;
                        }
                    }                   
                }
///////////ゴーレムの行動/////////////
                if(esl == 2){
                    gtc++;
                    //最初に狙いを定める
                    if(gtc == 1){
                        if(enemy_condition>1&&Scount == 0){
                            gATKup = 2;
                            printf("ゴーレムがスキル「パワーアップ」を発動した！\n");
                            printf("次の攻撃の威力が倍になった！\n");
                            Scount = 7;
                            gtc = 2;
                        }
                        if(gtc != 2){
                            printf("ゴーレムはプレイヤーに狙いを定めた。\n");
                            gtc = 2;
                        }
                    }
                    //次に攻撃
                    if(gtc == 3){
                        //怒り状態かつスキルポイントが9以上かつ大地の加護を使っている場合、破壊する
                        if(enemy_condition>0&&guard>0&&eSP>8){
                            eSP = eSP-9;
                            guard = 0;
                            printf("ゴーレムがスキル「ガードブレイク」を発動した！\n");
                            printf("精霊の加護を破られた！\n");
                            printf("プレイヤーに%dダメージ！\n",300*gATKup);
                            if(HP-300*gATKup>0){
                                HP = HP-300*gATKup;
                            }
                            else{
                                printf("プレイヤーは力尽きた...。\n");
                                HP = 0;                            
                                wl = 2;
                            }
                            gtc = 4;
                        }
                        //そうでない場合通常攻撃
                        if(gtc != 4){
                            printf("ゴーレムの攻撃！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                            else{
                                printf("プレイヤーに%dダメージ！\n",eATK*gATKup);
                                if(HP-eATK*gATKup>0){
                                     HP = HP-eATK*gATKup;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;                            
                                    wl = 2;
                                }
                           }
                        }
                        if(gATKup == 2){
                            gATKup = 1;
                        }
                        gtc = 4;
                    }
                    if(gtc == 5){
                        printf("ゴーレムは体勢を立て直した。\n");
                        gtc = 0;
                    }
                }
//////////////////イビルセルの行動///////////////
                if(esl == 3){
                    //通常時
                    if(enemy_condition == 0){
                        //スキルポイントが足りなければ通常攻撃                        
                        if(eSP<2||poison>0){
                            printf("イビルセルの攻撃！\n");
                        if(guard>0){
                            printf("大地の精霊が攻撃を防いだ！\n");
                        }
                        else{
                            printf("プレイヤーに%dダメージ！\n",eATK);
                            if(HP-eATK>0){
                                 HP = HP-eATK;
                            }
                            else{
                                printf("プレイヤーは力尽きた...。\n");
                                HP = 0;                            
                                wl = 2;
                                }
                           }
                        }
                        //スキルポイントが2以上＆プレイヤーが毒でない場合、毒攻撃を使う
                        if(eSP >= 2&&poison == 0){
                            eSP = eSP-2;
                            printf("イビルセルがスキル「毒攻撃」を使った！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                            else{
                                printf("プレイヤーに25ダメージ！\n");
                                if(HP-25>0){
                                    printf("プレイヤーは毒に侵された...。\n");
                                    poison = 1;
                                    HP = HP-25;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;                            
                                    wl = 2;
                                }
                            }
                        }
                    }
                    if(enemy_condition == 1){
                        if(eSP>9){
                            //SPが足りていれば猛毒攻撃を使う
                            printf("イビルセルがスキル「猛毒攻撃」を使った！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                            else{
                                printf("プレイヤーに50ダメージ！\n");
                                if(HP-50>0){
                                    printf("プレイヤーは猛毒に侵された...。\n");
                                    poison = 2;
                                    HP = HP-50;
                                }
                            else{
                                printf("プレイヤーは力尽きた...。\n");
                                HP = 0;                            
                                wl = 2;
                               }
                           }
                        }
                        //そうでない場合は通常攻撃（威力は２倍）
                        else{
                            printf("イビルセルの攻撃！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                            else{
                                printf("プレイヤーに%dダメージ！\n",eATK*2);
                                if(HP-eATK*2>0){
                                     HP = HP-eATK*2;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;                            
                                    wl = 2;
                                }
                            }
                        }
                    }
                    if(enemy_condition == 2){
                        if(Scount != 0){
                            printf("イビルセルはスキル「劇毒攻撃」を使った！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                            else{
                                printf("プレイヤーに200ダメージ！\n");
                                if(HP-200>0){
                                    printf("プレイヤーは劇毒に侵された...。\n");
                                     HP = HP-200;
                                     poison = 3;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;                            
                                    wl = 2;
                                }
                            }
                        }
                        if(Scount == 0){
                            printf("イビルセルはスキル「麻痺毒攻撃」を使った！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                            else{
                                if(poison<2){
                                    printf("プレイヤーは猛毒に侵された...。\n");
                                    poison = 2;
                                }
                                paralysis = 1;
                                Scount = 3;
                                printf("プレイヤーに100ダメージ！\n");
                                printf("神経毒が体の自由を奪う！\n");
                                if(HP-100>0){
                                     HP = HP-100;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;                            
                                    wl = 2;
                                }
                            }
                        }
                    }
                }
//////////////究極生命体の行動/////////////
                if(esl == 4){
                    if(enemy_condition == 0){
                        //究極生命体のSPが4以下の時
                        if(eSP<5){
                            //プレイヤーが猛毒でない場合、猛毒にする
                            if(poison<2&&Scount == 0){
                                printf("究極生命体がスキル「猛毒の霧」を使った！\n");
                                poison = 2;
                                printf("プレイヤーは猛毒に侵された...。\n");
                                Scount = 6;
                            }
                            //それ以外の場合、通常攻撃を行う
                            else{
                                printf("究極生命体の攻撃！\n");
                                if(guard>0){
                                    printf("大地の精霊が攻撃を防いだ！\n");
                                }
                                else{
                                    printf("プレイヤーに%dダメージ！\n",eATK);
                                    if(HP-eATK>0){
                                        HP = HP-eATK;
                                    }
                                    else{
                                        printf("プレイヤーは力尽きた...。\n");
                                        HP = 0;                            
                                        wl = 2;
                                    }
                                }
                            }
                        }
                        //究極生命体のSPが5以上の場合、吸収攻撃を行う
                        if(eSP >= 5){
                            eSP = eSP-5;
                            printf("究極生命体がスキル「ソウルイート」を使った！\n");
                            if(guard>0){
                                    printf("大地の精霊が攻撃を防いだ！\n");
                                }
                            else{
                                printf("プレイヤーの魂を喰らった！\n");
                                printf("プレイヤーに200ダメージ！\n");
                                if(HP>200){
                                    HP = HP-200;
                                    if(eHP+100<eMax){
                                        eHP = eHP+100;
                                        printf("究極生命体のHPが100回復した！\n");
                                    }
                                    else{
                                        eHP = eMax;
                                        printf("究極生命体のHPが満タンになった！\n");
                                    }
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;
                                    wl = 2;
                                }
                            }
                        }
                    }
                    if(enemy_condition == 1){
                        //SP20以上ならSPを消費する攻撃（SP1につき威力が25上昇）を使う
                        if(eSP >= 20){
                            printf("究極生命体はスキル「SPバースト」を使った！\n");
                            printf("蓄えたスキルポイントを解き放った！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                                eSP = 0;
                            }
                            else{
                                printf("プレイヤーに%dダメージ！\n",eSP*25);
                                if(HP-eSP*25>0){
                                    HP = HP-eSP*25;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;                            
                                    wl = 2;
                                }
                                eSP = 0;
                            }
                            Scount = 1;
                        }
                        if(Scount == 0){
                            //行動していない場合かつこちらのSPがたまっている場合はSPを奪う
                            if(elementB+elementY+elementR+elementG >= 4){
                                printf("究極生命体がスキル「SPスティール」を使った！\n");
                                printf("スキルポイントを全て奪われた...。\n");
                                eSP = eSP+elementB+elementY+elementR+elementG;
                                elementB = 0;
                                elementR = 0;
                                elementY = 0;
                                elementG = 0;
                            }
                            //それ以外の場合、通常攻撃を行う
                            else{
                                printf("究極生命体の攻撃！\n");
                                if(guard>0){
                                    printf("大地の精霊が攻撃を防いだ！\n");
                                }
                                else{
                                    printf("プレイヤーに%dダメージ！\n",eATK);
                                    if(HP-eATK>0){
                                        HP = HP-eATK;
                                    }
                                    else{
                                        printf("プレイヤーは力尽きた...。\n");
                                        HP = 0;                            
                                        wl = 2;
                                    }
                                }
                            }
                        }
                    }
                    if(enemy_condition == 2){
                        if(Scount>0){
                                printf("究極生命体の攻撃！\n");
                                if(guard>0){
                                    printf("大地の精霊が攻撃を防いだ！\n");
                                }
                                else{
                                    printf("プレイヤーに%dダメージ！\n",eATK);
                                    if(HP-eATK>0){
                                        HP = HP-eATK;
                                    }
                                    else{
                                        printf("プレイヤーは力尽きた...。\n");
                                        HP = 0;                            
                                        wl = 2;
                                    }
                                }
                            }
                        if(Scount == 0){
                            printf("究極生命体がスキル「ハイパーヒール」を発動した！\n");
                            //全回復できる場合
                            if (eHP+300>eMax){
                                eHP = eMax;
                                printf("究極生命体のHPが満タンになった！\n");
                            }
                            //そうでない場合
                            else{
                                eHP = eHP+300;
                                printf("究極生命体のHPが300回復した！\n");
                            }
                            Scount = 4;
                        }
                    }
                }
///////////////???の行動//////////////
                if(esl == 99){
                    //第一形態
                    if(eHP >= 83333){
                        //SP5以上かつ、通常攻撃より削れるならHPを半分にする
                        if(eSP>4&&HP/2>eATK&&guard == 0){
                            printf("???がスキル「ソウルスプリット」を使った！\n");
                            printf("魂が引き裂かれる...！\n");
                            printf("HPが半分になった！\n");
                            HP = HP/2;
                            eSP = eSP-5;
                            Scount = 1;
                        }
                        //そうでない場合は通常攻撃を行う
                        if(Scount == 0&&(eSP <= 4||HP/2 <= eATK||guard != 0)){
                            if(burnup>0){
                                printf("???はスキル「スティラクアス」を使った！\n");
                                if(guard>0){
                                    printf("大地の精霊が攻撃を防いだ！\n");
                                }
                                else{
                                    printf("プレイヤーに100ダメージ！\n");
                                    if(HP-100>0){
                                        printf("水の力が炎の力を弱めた！\n");
                                        burnup--;
                                        HP = HP-100;
                                    }
                                    else{
                                        printf("プレイヤーは力尽きた...。\n");
                                        HP = 0;                            
                                        wl = 2;
                                    }
                                }
                            }
                            else{
                                printf("???の攻撃！\n");
                                if(guard>0){
                                    printf("大地の精霊が攻撃を防いだ！\n");
                                }
                                else{
                                    printf("プレイヤーに%dダメージ！\n",eATK);
                                    if(HP-eATK>0){
                                        HP = HP-eATK;
                                    }
                                    else{
                                        printf("プレイヤーは力尽きた...。\n");
                                        HP = 0;                            
                                        wl = 2;
                                    }
                                }
                            }
                        }
                    }
                    //第二形態
                    if(66666 <= eHP&&eHP<83333){
                        //SP5以上かつ、ヘルファイアのほうが削れるならヘルファイアを使う
                        if(eSP>4&&HP/2 <= 300&&guard == 0){
                            printf("???がスキル「ヘルファイア」を使った！\n");
                            printf("地獄の業火がプレイヤーを襲う！\n");
                            printf("プレイヤーに300ダメージ！\n");
                            if(HP-300>0){
                                    HP = HP-300;
                            }
                            else{
                                printf("プレイヤーは力尽きた...。\n");
                                HP = 0;                            
                                wl = 2;
                            }
                            eSP = eSP-5;
                            Scount = 1;
                        }
                        //SP5以上かつ、ヘルファイアより削れるならHPを半分にする
                        if(eSP>4&&HP/2>300&&guard == 0){
                            printf("???がスキル「ソウルスプリット」を使った！\n");
                            printf("魂が引き裂かれる...！\n");
                            printf("HPが半分になった！\n");
                            HP = HP/2;
                            eSP = eSP-5;
                            Scount = 1;
                        }
                        //そうでない場合は通常攻撃を行う
                        if(Scount == 0&&(eSP <= 4||HP/2 <= eATK||guard != 0)){
                            printf("???の攻撃！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                            else{
                                printf("プレイヤーに170ダメージ！\n");
                                if(HP-170>0){
                                    HP = HP-170;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;                            
                                    wl = 2;
                                }
                            }
                        }
                    }
                    //第三形態
                    if(50000<eHP&&eHP<66666){
                        //永久持続型の回復スキルを使う（最優先）
                        if(eSP>7&&healf == 0){
                            healf = 1;
                            eSP = eSP-7;
                            printf("???がスキル「生命の息吹」を使った！\n");
                            printf("生命のオーラが???を癒す！\n");
                            Scount = 1;
                        }
                        //回復スキル設置が終わった後SPがたまったら、強攻撃を行う
                        if(eSP>4&&healf == 1&&guard == 0){
                            printf("???がスキル「風刃乱舞」を使った！\n");
                            printf("無数の風の刃がプレイヤーを襲う！\n");
                            printf("プレイヤーに350ダメージ！\n");
                            if(HP-350>0){
                                HP = HP-350;
                            }
                            else{
                                printf("プレイヤーは力尽きた...。\n");
                                HP = 0;                            
                                wl = 2;
                            }
                            eSP = eSP-4;
                            Scount = 1;
                        }
                        //SP不足の場合、通常攻撃を行う
                        if((eSP <= 7||guard>0)&&Scount == 0){
                            printf("???がスキル「エナジードレイン」を使った！\n");
                            if(guard>0){
                                    printf("大地の精霊が攻撃を防いだ！\n");
                                }
                            else{
                                printf("プレイヤーの生命力を吸収する！\n");
                                printf("プレイヤーに100ダメージ！\n");
                                if(HP>100){
                                    HP = HP-100;
                                    if(eHP+50<eMax){
                                        eHP = eHP+50;
                                        printf("???のHPが50回復した！\n");
                                    }
                                    else{
                                        eHP = eMax;
                                        printf("???のHPが満タンになった！\n");
                                    }
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;
                                    wl = 2;
                                }
                            }
                        }
                    }
                    //第四形態
                    if(eHP <= 50000&&eHP>33333){
                        //危険を察知したら防御スキルを使う
                        if(eSP>29&&(burnup>1||elementB>2)){
                            printf("???はスキル「大地の加護」を使った！\n");
                            printf("大地の精霊が???を守る！\n");
                            eguard = 3;
                            eSP = 0;
                            Scount = 1;
                        }
                        //大地のカゴを使っていたら破壊する
                        if(guard>0){
                            printf("???がスキル「ガードブレイク」を発動した！\n");
                            printf("精霊の加護を破られた！\n");
                            printf("プレイヤーに180ダメージ！\n");
                            Scount = 1;
                            guard = 0;
                            if(HP-180>0){
                                HP = HP-180;
                            }
                            else{
                                printf("プレイヤーは力尽きた...。\n");
                                HP = 0;                            
                                wl = 2;
                            }
                        }
                        //そうでない場合通常攻撃
                        if(Scount == 0){
                            printf("???の攻撃！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                            else{
                                printf("プレイヤーに200ダメージ！\n");
                                if(HP-200>0){
                                    HP = HP-200;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;                            
                                    wl = 2;
                                }
                            }
                        }
                    }
                    //第五形態
                    if(16667<eHP&&eHP <= 33333){
                        //SPが溜まっていて劇毒でない場合、劇毒にする
                        if(eSP>17&&poison<3&&guard == 0){
                            printf("???はスキル「デッドリーポイズン」を使った！\n");
                            printf("劇毒が体を蝕んでいく...!\n");
                            printf("プレイヤーに%dダメージ！\n",100*gATKup);
                            if(HP-100*gATKup>0){
                                poison = 4;
                                printf("プレイヤーは劇毒に侵された...。\n");
                                HP = HP-100*gATKup;
                            }
                            else{
                                printf("プレイヤーは力尽きた...。\n");
                                HP = 0;                            
                                wl = 2;
                            }
                            eSP = eSP-18;
                            Scount = 1;
                        }
                        if(guard>0||eSP <= 17){
                            //SP不足だがある程度溜まっている場合、麻痺or猛毒の攻撃を使う
                            if(eSP>10){
                                if(eSP%2 == 0){
                                    printf("???はスキル「パラライズボム」を使った！\n");
                                    if(guard>0){
                                        printf("大地の精霊が攻撃を防いだ！\n");
                                    }
                                    else{
                                        printf("プレイヤーに%dダメージ！\n",50*gATKup);
                                        if(HP-50*gATKup>0){
                                            paralysis = 1;
                                            printf("神経毒がプレイヤーの自由を奪う！\n");
                                            HP = HP-50*gATKup;
                                            }
                                        else{
                                            printf("プレイヤーは力尽きた...。\n");
                                            HP = 0;                            
                                            wl = 2;
                                        }
                                    }
                                }
                                if(eSP%2 == 1){
                                    printf("???はスキル「ポイズンボム」を使った！\n");
                                    if(guard>0){
                                        printf("大地の精霊が攻撃を防いだ！\n");
                                    }
                                    else{
                                        printf("プレイヤーに%dダメージ！\n",50*gATKup);
                                        if(HP-50*gATKup>0){
                                            HP = HP-50*gATKup;
                                            if(poison<2){
                                                poison = 2;
                                                printf("プレイヤーは猛毒に侵された...。\n");
                                            }
                                        }
                                        else{
                                            printf("プレイヤーは力尽きた...。\n");
                                            HP = 0;                            
                                            wl = 2;
                                        }
                                    }
                                }
                            }
                            //全く溜まってなければ通常攻撃を使う
                            if(eSP <= 10&&Scount == 0){
                                printf("???の攻撃！\n");
                                if(guard>0){
                                    printf("大地の精霊が攻撃を防いだ！\n");
                                }
                                else{
                                    printf("プレイヤーに%dダメージ！\n",50*gATKup);
                                    if(HP-50*gATKup>0){
                                        HP = HP-50*gATKup;
                                    }
                                    else{
                                        printf("プレイヤーは力尽きた...。\n");
                                        HP = 0;                            
                                        wl = 2;
                                    }
                                }
                            }
                        }
                    }
                    //第六形態
                    if(500<eHP&&eHP <= 16667){
                        if(Scount == 3){
                            printf("???はエネルギーを貯め始めた！\n");
                            deathcount2 = 2;
                            stop = 500;
                        }
                        if(deathcount == -1&&Scount != 11&&Scount != 3&&stop<0&&ruinend == 0){
                            printf("???の攻撃！\n");
                                if(guard>0){
                                    printf("大地の精霊が攻撃を防いだ！\n");
                                }
                            else{
                                printf("プレイヤーに%dダメージ！\n",200*gATKup);
                                if(HP-200*gATKup>0){
                                    HP = HP-200*gATKup;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;                            
                                    wl = 2;
                                }
                            }
                        }
                        if(Scount == 0&&ruinend == 0){
                            printf("???がスキル「バーンアップ」を発動した！\n");
                            printf("炎の精霊が、灼熱の炎でプレイヤーを攻撃した！\n");
                            if(guard>0){
                                printf("大地の精霊が攻撃を防いだ！\n");
                            }
                            else{
                                printf("プレイヤーに%dダメージ！\n",eATK*3);
                                if(HP-eATK*3>0){
                                HP = HP-eATK*3;
                                printf("炎の精霊が???に力を与えた！\n");
                                    eburnup = 4;
                                    gATKup = 2;
                                }
                                else{
                                    printf("プレイヤーは力尽きた...。\n");
                                    HP = 0;                            
                                    wl = 2;
                                }
                            }
                        Scount = 11;
                        }
                    }
                    //第七形態
                    if(ruinend == 0&&eHP <= 500){
                        printf("???がスキル「裁きの光」を使った！\n");
                        if(guard>0){
                            printf("大地の精霊が攻撃を防いだ！\n");
                        }
                        else{
                            printf("天から降り注ぐ光が魂を焦がす...!\n");
                            printf("プレイヤーに700ダメージ！\n");
                            if(HP-700>0){
                                HP = HP-700;
                            }
                            else{
                                printf("プレイヤーは力尽きた...。\n");
                                HP = 0;                            
                                wl = 2;
                            }
                        }
                    }
                }
                //破滅が終わった後元に戻す
                if(ruinend == 1){
                    ruinend = 0;
                }
                //生命の息吹の処理
                if(HP>0&&healf == 1){
                    printf("生命のオーラの力で、???の傷が癒えていく！\n");
                    if(eHP+50<eMax){
                        eHP = eHP+50;
                        printf("???のHPが50回復した！\n");
                    }
                    else{
                        eHP = eMax;
                        printf("???のHPが満タンまで回復した！\n");
                    }
                }
                //大地の加護の処理＆持続ターン減少
                if(guard != 0){
                    guard--;
                }
                if(eguard != 0){
                    eguard--;
                }
                //バーンアップの持続ターン減少
                if(burnup != 0){
                    if(burnup-1 == 0){
                        ATKup = 1;
                        burnup = 0;
                    }
                else{
                    burnup--;
                    }
                }
                if(eburnup != 0){
                    if(eburnup-1 == 0){
                        gATKup = 1;
                        eburnup = 0;
                    }
                else{
                    eburnup--;
                    }
                }
                HgSleep(0.5);
                printf("\n");
                //麻痺処理
                if(HP>0&&paralysis == 0){
                    printf("プレイヤーの痺れがとれた！\n");
                    paralysis = -1;
                }
                if(HP>0&&paralysis>0){
                    printf("体が痺れて動けない...。\n");
                    paralysis--;
                    AD = 1;
                }
                if(paralysis == -1){
                    AD = 0;
                }
                pushd = 0;
                break;
            }
            HgSleep(0.005);
        }
    }
    HgClose();
    return 0;
}
