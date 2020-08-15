#include <stdio.h>
#include <handy.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "make_magiccircle.h"
#include "Graphics/enemy/unknown_creature_graphic.h"
#include "Graphics/enemy/magical_creature_graphic.h"
#include "Graphics/enemy/golem_graphic.h"
#include "Graphics/enemy/evil_cell_graphic.h"
#include "Graphics/enemy/ultimate_creature_graphic.h"
#include "Graphics/enemy/Noname_graphic.h"
#include "Graphics/background/select_equipment.h"
#include "Graphics/background/select_enemy.h"
#include "Graphics/background/seclet_stage_enter.h"
#include "Graphics/background/win.h"
#include "Graphics/background/lose.h"
#include "Graphics/icon/skill_icon.h"
#include "Graphics/icon/grandguard_icon.h"
#include "Graphics/icon/burnup_icon.h"
#include "Graphics/icon/powerlost_icon.h"
#include "Graphics/icon/poison_icon.h"
#include "Graphics/battle_field/attack_field.h"
#include "Graphics/battle_field/enemy_HPbar.h"
#include "Graphics/battle_field/player_HPbar.h"
#include "Graphics/battle_field/deathzone.h"
#include "Graphics/battle_field/darkness.h"
#include "Graphics/battle_field/attackbar.h"
#include "Graphics/animation_controll/darkness_animation.h"
#include "Graphics/animation_controll/deathzone_animation.h"
#include "Graphics/animation_controll/float_animation.h"
#include "Graphics/animation_controll/expand_animation.h"
#include "Graphics/animation_controll/magiccircle_expand.h"
#include "Graphics/animation_controll/magiccircle_expand2.h"
#include "battle/system/player_heal.h"
#include "battle/system/player_curepoison.h"
#include "battle/player_skill/Hyperheal.h"

#define ws 400//ウィンドウサイズ
#define attackbar_startpoint -200//攻撃バーの出発位置
#define attackbar_endpoint ws + 200//攻撃バーの終点
#define attackbar_speed 10 - rand() % 5//攻撃バーの移動速度
#define darkness_border_x 185//ブラインドダークネスで出す闇の境界線(x)
#define darkness_speed_x 9.25//ブラインドダークネスで出す闇の侵食速度(x)
#define darkness_border_y 100//ブラインドダークネスで出す闇の境界線(y)
#define darkness_speed_y 5//ブラインドダークネスで出す闇の侵食速度(y)
#define deathzone_min 10//デスゾーンの範囲の最小値
#define deathzone_max 180//デスゾーンの範囲の最大値
#define floating_min -5//生命体浮遊範囲の最小値
#define floating_max 15//生命体浮遊範囲の最大値
#define expand_min 0//イビルせる膨張範囲の最小値
#define expand_max 2//イビルせる膨張範囲の最大値
#define player_MaxHP 1000//プレイヤーのHP