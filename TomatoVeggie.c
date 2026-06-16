/* =========================================================================
   TomatoVeggie.c   ―Rakuten最強U-NEXT編―  （parody／Cソース風ストーリー）
   ========================================================================= */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

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
void rakutenMobilePromo(void);
void kioskBanner(int loop);
void runStory(void);

/* ─── キオスクモード用グローバルフラグ ─── */
static volatile int g_running = 1;

/* Ctrl+C でループを安全に終了 */
static void handleSigint(int sig)
{
    (void)sig;
    g_running = 0;
}


int main(int argc, char *argv[])
{
    int kiosk = (argc >= 2 && strcmp(argv[1], "--kiosk") == 0);

    if (kiosk) {
        /* キオスクモード: Ctrl+C で終了するまでループ */
        signal(SIGINT, handleSigint);
        int loop = 1;
        while (g_running) {
            system("clear");
            kioskBanner(loop++);
            runStory();
            if (!g_running) break;
            /* ループ間のインターバル（次のサイクルまでカウントダウン表示） */
            printf("\n\033[33m  次のループまで 10 秒...  Ctrl+C で終了\033[0m\n");
            fflush(stdout);
            for (int i = 10; i > 0 && g_running; i--) {
                sleep(1);
            }
        }
        system("clear");
        puts("  [Kiosk] ご覧いただきありがとうございました！");
    } else {
        /* 通常モード: 1 回実行して終了 */
        runStory();
        puts("\n/* === End of Story: Return 0 ===================================== */");
    }

    return 0;
}

/* ----------------------------------------------------------------------- */
void kioskBanner(int loop)
/* キオスクモード用の目立つヘッダーバナー */
{
    puts("\033[1;31m"); /* 太字・赤 */
    puts("  ██████╗  █████╗ ██╗  ██╗██╗   ██╗████████╗███████╗███╗   ██╗");
    puts("  ██╔══██╗██╔══██╗██║ ██╔╝██║   ██║╚══██╔══╝██╔════╝████╗  ██║");
    puts("  ██████╔╝███████║█████╔╝ ██║   ██║   ██║   █████╗  ██╔██╗ ██║");
    puts("  ██╔══██╗██╔══██║██╔═██╗ ██║   ██║   ██║   ██╔══╝  ██║╚██╗██║");
    puts("  ██║  ██║██║  ██║██║  ██╗╚██████╔╝   ██║   ███████╗██║ ╚████║");
    puts("  ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝    ╚═╝   ╚══════╝╚═╝  ╚═══╝");
    puts("\033[0m");
    puts("\033[1;37m  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    puts("      🍅 楽天モバイル 最強プラン  ―野菜キャラが全力アピール！―");
    puts("  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\033[0m");
    printf("\033[90m  [Kiosk loop #%d]\033[0m\n\n", loop);
}

/* ----------------------------------------------------------------------- */
void runStory(void)
/* メインストーリーを 1 サイクル実行する（通常／キオスク共用） */
{
    /* Scene 0 */
    puts("/* === Scene 0 : Memory Allocation for HOT NEWS ==================== */");
    launchUNEXT();
    sleep(2);

    /* Scene 1 */
    puts("\n/* === Scene 1 : Competitor Fee Hike Interrupt ==================== */");
    enemyFeeRise();
    sleep(2);

    /* Scene 2 */
    puts("\n/* === Scene 2 : Referral Link Injection ========================== */");
    referralProgram();
    sleep(2);

    /* Scene 3 */
    puts("\n/* === Scene 3 : Premium Card Coupon Thread ======================= */");
    premiumProgram();
    sleep(2);

    /* Scene 4 */
    puts("\n/* === Scene 4 : Rakuten Mobile Main Appeal Broadcast ============= */");
    rakutenMobilePromo();
    sleep(3);

    /* キオスク向けフッター：申し込みURLを大きく表示 */
    puts("\n\033[1;32m");
    puts("  ┌─────────────────────────────────────────────────────────────┐");
    puts("  │  📱 今すぐ申し込む！                                        │");
    puts("  │     https://network.mobile.rakuten.co.jp/                   │");
    puts("  │                                                             │");
    puts("  │  🎁 紹介リンク（MNP:14,000pt / 新規:7,000pt）              │");
    puts("  │     http://r10.to/hUqA5F                                    │");
    puts("  └─────────────────────────────────────────────────────────────┘");
    puts("\033[0m");
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

/* ----------------------------------------------------------------------- */
void rakutenMobilePromo(void)
/* 楽天モバイルの魅力を全キャラクタで一斉アピール */
{
    puts("Tomato_Taro:   \"楽天モバイルは国内通話・SMSが Rakuten Link アプリで無料！\"");
    puts("Broccoli_Kun:  \"データ使い放題でも月最大 3,278 円！ 使った分だけ課金だ！\"");
    puts("Carrot_Sensei: \"楽天ポイントが貯まる・使える！ 経済圏フル活用でお得度MAX！\"");
    puts("Lettuce_Hime:  \"海外 151 の国と地域でデータ通信 2GB/月 無料！旅行にも最強！\"");
    printf("ALL:           \"詳しくはこちら → %s\"\n",
           "https://network.mobile.rakuten.co.jp/");
}


/* =========================================================================
   付録リンク
   -------------------------------------------------------------------------
   料金シミュレーション           : https://network.mobile.rakuten.co.jp/fee/simulation/
   Rakuten Mobile AI Assistant 2.0 : https://network.mobile.rakuten.co.jp/chat/?token=a8X4kLpQvWmF72NyHzjDqr9sp4HLyPuEkVnmo2KU8jMd6rw3XcY7q4k5z3JPtWyB
   =========================================================================
*/

