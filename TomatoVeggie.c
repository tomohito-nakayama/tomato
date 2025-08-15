/* =========================================================================
   TomatoVeggie.c   ―Rakuten最強U-NEXT編―  （parody／Cソース風ストーリー）
   ========================================================================= */

#include <stdio.h>

/* ─── 野菜キャラクタ定義 ─── */
typedef struct {
    const char *name;
    const char *role;
} VEGETABLE;

VEGETABLE party[] = {
    {"Tomato_Taro",      "Main() プロセス"},
    {"Carrot_Sensei",    "Ref Link Handler"},
    {"Broccoli_Kun",     "Cost Shield"},
    {"Lettuce_Hime",     "PremiumMessenger"},
    {NULL,               NULL}
};

/* ─── プロトタイプ ─── */
void launchUNEXT(void);
void enemyFeeRise(void);
void referralProgram(void);
void premiumProgram(void);

int main(void)
{
    puts("/* === Scene 0 : Memory Allocation for HOT NEWS ==================== */");
    launchUNEXT();          /* Rakuten最強U-NEXT 先行キャンペーン開幕 */

    puts("\n/* === Scene 1 : Competitor Fee Hike Interrupt ==================== */");
    enemyFeeRise();         /* 競合他社の手数料値上げに対抗 */

    puts("\n/* === Scene 2 : Referral Link Injection ========================== */");
    referralProgram();      /* 従業員紹介プログラムでポイント盛り */

    puts("\n/* === Scene 3 : Premium Card Coupon Thread ======================= */");
    premiumProgram();       /* ギガ割引クーポンの配給説明 */

    puts("\n/* === End of Story: Return 0 ===================================== */");
    return 0;
}

/* ----------------------------------------------------------------------- */
void launchUNEXT(void)
/* Rakuten最強U-NEXT 先行キャンペーンを画面に表示 */
{
    printf("Tomato_Taro: \"HOTだ！ U-NEXT 見放題開始！ -> %s\"\n",
           "https://network.mobile.rakuten.co.jp/campaign/unext/");
}

/* ----------------------------------------------------------------------- */
void enemyFeeRise(void)
/* 競合他社の手数料値上げイベント */
{
    printf("Broccoli_Kun: \"敵の値上げ攻撃を確認！ しかし SAIKYO Plan(3GB/1,078円)で無効化！\"\n");
}

/* ----------------------------------------------------------------------- */
void referralProgram(void)
/* 従業員紹介プログラムを案内 */
{
    printf("Carrot_Sensei: \"リンク展開 → %s\"\n", "http://r10.to/hUqA5F");
    printf("               MNP:14,000pt  新規:7,000pt を付与！\n");
}

/* ----------------------------------------------------------------------- */
void premiumProgram(void)
/* 楽天カードプレミアムプログラムとクーポン説明 */
{
    printf("Lettuce_Hime: \"楽天プレミアムカード/ブラックカード会員へ毎月ギガ割引クーポン！\"\n");
    printf("              詳細 → %s\n", "https://www.rakuten-card.co.jp/premiumprogram/rakuten-mobile/");
}

/* =========================================================================
   付録リンク
   -------------------------------------------------------------------------
   料金シミュレーション           : https://network.mobile.rakuten.co.jp/fee/simulation/
   Rakuten Mobile AI Assistant 2.0 : https://network.mobile.rakuten.co.jp/chat/?token=a8X4kLpQvWmF72NyHzjDqr9sp4HLyPuEkVnmo2KU8jMd6rw3XcY7q4k5z3JPtWyB
   =========================================================================
*/

