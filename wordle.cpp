#include "wordle.h"
#include "ui_wordle.h"
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include <qprocess.h>
#include <qmessagebox.h>
using namespace std;
#define MAX_SIZE 1

QString qwords;
char letters[5];

wordle::wordle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wordle)
{
    setWindowTitle("Wordle Challenge");
    this->setFixedSize(770,750);
    ui->setupUi(this);

    ui->textEdit->setFocus();
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->textEdit_6->setEnabled(false);
    ui->textEdit_7->setEnabled(false);
    ui->textEdit_8->setEnabled(false);
    ui->textEdit_9->setEnabled(false);
    ui->textEdit_10->setEnabled(false);
    ui->textEdit_11->setEnabled(false);
    ui->textEdit_12->setEnabled(false);
    ui->textEdit_13->setEnabled(false);
    ui->textEdit_14->setEnabled(false);
    ui->textEdit_15->setEnabled(false);
    ui->textEdit_16->setEnabled(false);
    ui->textEdit_17->setEnabled(false);
    ui->textEdit_18->setEnabled(false);
    ui->textEdit_19->setEnabled(false);
    ui->textEdit_20->setEnabled(false);
    ui->textEdit_21->setEnabled(false);
    ui->textEdit_22->setEnabled(false);
    ui->textEdit_23->setEnabled(false);
    ui->textEdit_24->setEnabled(false);
    ui->textEdit_25->setEnabled(false);
    ui->textEdit_26->setEnabled(false);
    ui->textEdit_27->setEnabled(false);
    ui->textEdit_28->setEnabled(false);
    ui->textEdit_29->setEnabled(false);
    ui->textEdit_30->setEnabled(false);

    check();
}

wordle::~wordle()
{
    delete ui;
}


void wordle::on_textEdit_textChanged()
{
    //limit the max input
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE; // max input is 1
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        //设置当前的光标为更改后的光标
        ui->textEdit->setTextCursor(cursor);
    }
}

void wordle::on_textEdit_2_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_3_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_4_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}



void wordle::on_textEdit_5_textChanged(){
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
         cursor.deletePreviousChar();
         ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_6_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_7_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_8_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_9_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_10_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_11_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_12_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_13_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_14_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_15_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_16_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_17_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_18_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_19_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_20_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_21_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_22_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_23_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_24_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_25_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_26_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_27_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_28_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_29_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::on_textEdit_30_textChanged()
{
    QString textContent = ui->textEdit->toPlainText();
    int length = textContent.count();
    int maxLength = MAX_SIZE;
    if(length > maxLength) {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        if(cursor.hasSelection()) {
            cursor.clearSelection();
        }
        cursor.deletePreviousChar();
        ui->textEdit->setTextCursor(cursor);
    }
}


void wordle::check()
{
    string words[] = {"ABIDE","ABOUT","ABOVE","ABUSE","ACTOR","ACUTE","ADAPT","ADMIT","ADOPT","ADORE","ADULT",
                      "AFTER","AGAIN","AGENT","AGONY","AGREE","AHEAD","AISLE","ALARM","ALBUM","ALERT","ALIEN",
                      "ALIKE","ALIVE","ALLOW","ALLOY","ALONE","ALONG","ALOUD","ALTER","AMAZE","AMEND","AMONG",
                      "AMPLE","AMUSE","ANGEL","ANGER","ANGLE","ANGRY","ANKLE","ANNOY","APART","APPAL","APPLE",
                      "APPLY","APRIL","ARGUE","ARISE","ARRAY","ARROW","ASIDE","ASSET","AUDIO","AUDIT","AURAL",
                      "AVAIL","AVERT","AVOID","AWAIT","AWAKE","AWARD","AWARE","AWFUL","BACON","BADGE","BADLY",
                      "BASIC","BASIN","BASIS","BATCH","BATHE","BEACH","BEARD","BEAST","BEGIN","BEING","BELLY",
                      "BELOW","BENCH","BIBLE","BIRTH","BLACK","BLADE","BLAME","BLANK","BLAST","BLAZE","BLEAK",
                      "BLEED","BLEND","BLESS","BLIND","BLOCK","BLOOD","BLOOM","BLUNT","BLUSH","BOARD","BOAST",
                      "BONUS","BOOST","BOOTH","BOSOM","BOUND","BOWEL","BRACE","BRAIN","BRAKE","BRAND","BRASS",
                      "BRAVE","BREAD","BREAK","BREED","BRIBE","BRICK","BRIDE","BRIEF","BRING","BRISK","BROAD",
                      "BROOK","BROOM","BROWN","BRUSH","BUILD","BULLY","BUNCH","BURST","CABIN","CABLE","CAMEL",
                      "CANAL","CANDY","CANOE","CARGO","CARRY","CARVE","CATCH","CATER","CAUSE","CEASE","CHAIN",
                      "CHAIR","CHALK","CHAOS","CHARM","CHART","CHASE","CHEAP","CHEAT","CHECK","CHEEK","CHEER",
                      "CHESS","CHEST","CHIEF","CHILD","CHILL","CHINA","CHOKE","CIGAR","CIVIL","CLAIM","CLASH",
                      "CLASP","CLASS","CLEAN","CLEAR","CLERK","CLICK","CLIFF","CLIMB","CLING","CLOAK","CLOCK",
                      "CLONE","CLOSE","CLOTH","CLOUD","COACH","COAST","COLOR","COMIC","COUCH","COUGH","COULD",
                      "COUNT","COURT","COVER","CRACK","CRAFT","CRANE","CRASH","CRAWL","CRAZY","CREAM","CREEP",
                      "CRIME","CRISP","CROSS","CROWD","CROWN","CRUDE","CRUEL","CRUSH","CRUST","CURSE","CURVE",
                      "CYCLE","DAILY","DANCE","DATUM","DEATH","EIGHT","DAIRY","ENJOY","ERUPT","ERASE","DRAFT",
                      "ELBOW","DEPTH","DOZEN","EXILE","DECAY","EXTRA","DITCH","DRAIN","EVOKE","ENTER","EXERT",
                      "ELITE","ENDOW","ENEMY","EMPTY","DREAD","DREAM","DRUNK","DENSE","DRIFT","EQUIP","EAGER",
                      "EXPEL","EXACT","DEVIL","DWARF","ELDER","EJECT","EPOCH","DRINK","DROWN","EVADE","EARTH",
                      "ELECT","DRESS","DOUBT","EAGLE","DIZZY","DIRTY","ERECT","DELAY","DIARY","DRAMA","DRILL",
                      "DRIVE","DWELL","EARLY","EMBED","ENTRY","EQUAL","ERROR","ESSAY","EVENT","EVERY","EXCEL",
                      "EXIST","FABLE","FAINT","FAIRY","FAITH","FANCY","FATAL","FAULT","FAVOR","FEAST","FENCE",
                      "FERRY","FETCH","FEVER","FIBER","FIELD","FIFTY","FIGHT","FINAL","FIRST","FLAME","FLARE",
                      "FLASH","FLEET","FLESH","FLING","FLOAT","FLOCK","FLOOD","FLOOR","FLOUR","FLUID","FLUSH",
                      "FOCUS","FORCE","FORGE","FORTH","FORTY","FORUM","FOUND","FRAME","FRANK","FRAUD","FRESH",
                      "FRONT","FROST","FROWN","FRUIT","FUNNY","GAUGE","GHOST","GIANT","GLARE","GLASS","GLIDE",
                      "GLOBE","GLORY","GLOVE","GOODS","GOOSE","GRACE","GRADE","GRAIN","GRAND","GRANT","GRAPE",
                      "GRAPH","GRASP","GRASS","GRAVE","GRAZE","GREAT","GREEK","GREEN","GREET","GRIEF","GRIND",
                      "GROAN","GROPE","GROSS","GROUP","GUARD","GUESS","GUEST","GUIDE","GUILT","HABIT","HANDY",
                      "HAPPY","HARSH","HASTE","HASTY","HATCH","HEART","HEAVE","HEAVY","HEDGE","HELLO","HENCE",
                      "HINGE","HOBBY","HOIST","HONEY","HONOR","HORSE","HOTEL","HOUND","HOUSE","HOVER","HUMAN",
                      "HUMID","HUMOR","HURRY","IDEAL","IDIOM","IDIOT","IMAGE","IMPLY","INCUR","INDEX","INFER",
                      "INLET","INNER","INPUT","IRONY","ISSUE","JAPAN","JEANS","JEWEL","JOINT","JOLLY","JUDGE",
                      "JUICE","KNEEL","KNIFE","KNOCK","LABEL","LABOR","LAPSE","LARGE","LASER","LATER","LATIN",
                      "LAUGH","LAYER","LEARN","LEASE","LEAST","LEAVE","LEGAL","LEMON","LEVEL","LEVER","LIGHT",
                      "LIMIT","LINEN","LINER","LITER","LITRE","LIVER","LOBBY","LOCAL","LODGE","LOFTY","LOGIC",
                      "LOOSE","LORRY","LOVER","LOWER","LOYAL","LUCKY","LUNAR","LUNCH","MADAM","MAGIC","MAJOR",
                      "MARCH","MARRY","MATCH","MAYBE","MAYOR","MEANS","MEDAL","MELON","MERCY","MERGE","MERIT",
                      "MERRY","METAL","METER","MIDST","MIGHT","MINOR","MINUS","MODEL","MOIST","MONEY","MONTH",
                      "MORAL","MOTEL","MOTOR","MOULD","MOUNT","MOURN","MOUSE","MOUTH","MOVIE","MUSIC","NAIVE",
                      "NAKED","NASTY","NAVAL","NEGRO","NERVE","NEVER","NIECE","NIGHT","NINTH","NOBLE","NOISE",
                      "NOISY","NORTH","NOVEL","NURSE","NYLON","OCCUR","OCEAN","OFFER","OFTEN","ONION","OPERA",
                      "ORBIT","ORDER","ORGAN","OTHER","OUGHT","OUNCE","OUTER","OWING","OWNER","OXIDE","OZONE",
                      "PAINT","PANDA","PANEL","PANIC","PANTS","PAPER","PARTY","PASTE","PATCH","PAUSE","PEACE",
                      "PEACH","PEARL","PEDAL","PENNY","PETTY","PHASE","PHONE","PHOTO","PIANO","PIECE","PILOT",
                      "PINCH","PITCH","PLACE","PLAIN","PLANE","PLANT","PLATE","PLEAD","POINT","POLAR","PORCH",
                      "POUND","POWER","PRESS","PRICE","PRICK","PRIDE","PRIME","PRINT","PRIOR","PRIZE","PROBE",
                      "PRONE","PROOF","PROSE","PROUD","PROVE","PULSE","PUNCH","PUPIL","PURSE","QUART","QUEEN",
                      "QUEER","QUEST","QUEUE","QUICK","QUIET","QUILT","QUITE","QUOTA","QUOTE","RADAR","RADIO",
                      "RAISE","RALLY","RANGE","RAPID","RATIO","RAZOR","REACH","REACT","READY","REALM","REBEL",
                      "RECUR","REFER","REIGN","RELAX","RELAY","RENEW","REPAY","REPEL","REPLY","RIDGE","RIFLE",
                      "RIGHT","RIGID","RIVAL","RIVER","ROAST","ROBOT","ROMAN","ROUGH","ROUND","ROUSE","ROUTE",
                      "ROYAL","RULER","RUMOR","RURAL","SAINT","SALAD","SAUCE","SCALE","SCARE","SCARF","SCENE",
                      "SCENT","SCOLD","SCOPE","SCORE","SCORN","SCOUT","SCRAP","SCREW","SEIZE","SENSE","SERVE",
                      "SEVEN","SHADE","SHADY","SHAFT","SHAKE","SHALL","SHAME","SHAPE","SHARE","SHARK","SHARP",
                      "SHAVE","SHEAR","SHEEP","SHEER","SHEET","SHELF","SHELL","SHIFT","SHINE","SHIRT","SHOCK",
                      "SHOOT","SHORE","SHORT","SHOUT","SHOVE","SHRUG","SIEGE","SIGHT","SILLY","SINCE","SIREN",
                      "SKATE","SKILL","SKIRT","SKULL","SLACK","SLAVE","SLEEP","SLICE","SLIDE","SLOPE","SMALL",
                      "SMART","SMASH","SMELL","SMILE","SMOKE","SNACK","SNAKE","SNEAK","SNIFF","SOBER","SOLAR",
                      "SOLID","SOLVE","SORRY","SOUND","SOUTH","SPACE","SPADE","SPARE","SPARK","SPEAK","SPEAR",
                      "SPEED","SPELL","SPEND","SPICY","SPILL","SPINE","SPITE","SPLIT","SPOIL","SPOON","SPORT",
                      "SPRAY","STACK","STAFF","STAGE","STAIN","STAIR","STAKE","STALE","STALK","STALL","STAMP",
                      "STAND","STARE","START","STATE","STEAK","STEAL","STEAM","STEEL","STEEP","STEER","STERN",
                      "STICK","STIFF","STILL","STING","STOCK","STONE","STOOL","STOOP","STORE","STORM","STORY",
                      "STOVE","STRAP","STRAW","STRIP","STUDY","STUFF","STYLE","SUGAR","SUITE","SUPER","SURGE",
                      "SWAMP","SWARM","SWEAR","SWEAT","SWEEP","SWEET","SWELL","SWIFT","SWING","SWORD","TABLE",
                      "TABOO","TASTE","TEACH","TEASE","TEMPO","TEMPT","TENSE","THANK","THEFT","THEIR","THEME",
                      "THERE","THESE","THICK","THIEF","THIGH","THING","THINK","THIRD","THORN","THOSE","THREE",
                      "THROW","THUMB","TIGER","TIGHT","TIMID","TIRED","TITLE","TOAST","TODAY","TOKEN","TOOTH",
                      "TOPIC","TORCH","TOTAL","TOUCH","TOUGH","TOWEL","TOWER","TOXIC","TRACE","TRACK","TRADE",
                      "TRAIL","TRAIN","TRAIT","TRAMP","TRASH","TREAT","TREND","TRIAL","TRIBE","TRICK","TROOP",
                      "TRUCK","TRUNK","TRUST","TRUTH","TUTOR","TWICE","TWIST","UNCLE","UNDER","UNIFY","UNION",
                      "UNITE","UNITY","UNTIL","UPPER","UPSET","URBAN","USAGE","USUAL","UTTER","VAGUE","VALID",
                      "VALUE","VALVE","VERGE","VERSE","VIDEO","VIRUS","VISIT","VITAL","VIVID","VOCAL","VOICE",
                      "VOWEL","WAIST","WAKEN","WASTE","WATCH","WATER","WEARY","WEAVE","WEDGE","WEIGH","WEIRD",
                      "WHALE","WHEAT","WHEEL","WHERE","WHICH","WHILE","WHIRL","WHITE","WHOLE","WHOSE","WIDOW",
                      "WIDTH","WITCH","WOMAN","WORLD","WORRY","WORSE","WORST","WORTH","WOULD","WOUND","WRECK",
                      "WRIST","WRITE","WRONG","YEAST","YIELD","YOUNG","YOURS","YOUTH","ZEBRA"};

    srand((unsigned)time(NULL));
    int a = (rand() % (899 - 0)) + 0 + 1;
    qwords = QString::fromStdString(words[a]);
    qDebug("%s",qUtf8Printable(qwords));
    string buff = words[a];
    strncpy(letters, buff.c_str(), buff.length() + 1);
}

void wordle::Line1()
{
    ui->textEdit->setEnabled(false);
    ui->textEdit_2->setEnabled(false);
    ui->textEdit_3->setEnabled(false);
    ui->textEdit_4->setEnabled(false);
    ui->textEdit_5->setEnabled(false);
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(true);
    ui->textEdit_6->setEnabled(true);
    ui->textEdit_7->setEnabled(true);
    ui->textEdit_8->setEnabled(true);
    ui->textEdit_9->setEnabled(true);
    ui->textEdit_10->setEnabled(true);
}

void wordle::Line2()
{
    ui->textEdit_6->setEnabled(false);
    ui->textEdit_7->setEnabled(false);
    ui->textEdit_8->setEnabled(false);
    ui->textEdit_9->setEnabled(false);
    ui->textEdit_10->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(true);
    ui->textEdit_11->setEnabled(true);
    ui->textEdit_12->setEnabled(true);
    ui->textEdit_13->setEnabled(true);
    ui->textEdit_14->setEnabled(true);
    ui->textEdit_15->setEnabled(true);
}

void wordle::Line3()
{
    ui->textEdit_11->setEnabled(false);
    ui->textEdit_12->setEnabled(false);
    ui->textEdit_13->setEnabled(false);
    ui->textEdit_14->setEnabled(false);
    ui->textEdit_15->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(true);
    ui->textEdit_16->setEnabled(true);
    ui->textEdit_17->setEnabled(true);
    ui->textEdit_18->setEnabled(true);
    ui->textEdit_19->setEnabled(true);
    ui->textEdit_20->setEnabled(true);
}

void wordle::Line4()
{
    ui->textEdit_16->setEnabled(false);
    ui->textEdit_17->setEnabled(false);
    ui->textEdit_18->setEnabled(false);
    ui->textEdit_19->setEnabled(false);
    ui->textEdit_20->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(true);
    ui->textEdit_21->setEnabled(true);
    ui->textEdit_22->setEnabled(true);
    ui->textEdit_23->setEnabled(true);
    ui->textEdit_24->setEnabled(true);
    ui->textEdit_25->setEnabled(true);
}

void wordle::Line5()
{
    ui->textEdit_21->setEnabled(false);
    ui->textEdit_22->setEnabled(false);
    ui->textEdit_23->setEnabled(false);
    ui->textEdit_24->setEnabled(false);
    ui->textEdit_25->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(true);
    ui->textEdit_26->setEnabled(true);
    ui->textEdit_27->setEnabled(true);
    ui->textEdit_28->setEnabled(true);
    ui->textEdit_29->setEnabled(true);
    ui->textEdit_30->setEnabled(true);
}

void wordle::Line6()
{
    ui->textEdit_26->setEnabled(false);
    ui->textEdit_27->setEnabled(false);
    ui->textEdit_28->setEnabled(false);
    ui->textEdit_29->setEnabled(false);
    ui->textEdit_30->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
}



void wordle::on_pushButton_clicked()
{
    string tt1=ui->textEdit->toPlainText().toStdString();
    string tt2=ui->textEdit_2->toPlainText().toStdString();
    string tt3=ui->textEdit_3->toPlainText().toStdString();
    string tt4=ui->textEdit_4->toPlainText().toStdString();
    string tt5=ui->textEdit_5->toPlainText().toStdString();
    char uu1[1];//textedit上的字母
    strncpy(uu1, tt1.c_str(),1);
    char uu2[1];
    strncpy(uu2, tt2.c_str(),1);
    char uu3[1];
    strncpy(uu3, tt3.c_str(),1);
    char uu4[1];
    strncpy(uu4, tt4.c_str(),1);
    char uu5[1];
    strncpy(uu5, tt5.c_str(),1);

    bool colorflag1 = false;
    bool colorflag2 = false;
    bool colorflag3 = false;
    bool colorflag4 = false;
    bool colorflag5 = false;
    for (int i = 0; i < 5; i++)
    {
        if(i == 0){
            if(uu1[0]==letters[i]){
                ui->textEdit->setStyleSheet("color:green");
                colorflag1 = true;
                break;
            }
        }
        else{
            if(uu1[0]==letters[i]){
                ui->textEdit->setStyleSheet("color:#f8b500");
                colorflag1 = true;
            }
        }
    }

    if(!colorflag1){
        ui->textEdit->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 1){
            if(uu2[0]==letters[i]){
                ui->textEdit_2->setStyleSheet("color:green");
                colorflag2 = true;
                break;
            }
        }
        else{
            if(uu2[0]==letters[i]){
                ui->textEdit_2->setStyleSheet("color:#f8b500");
                colorflag2 = true;
            }
        }
    }

    if(!colorflag2){
        ui->textEdit_2->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 2){
            if(uu3[0]==letters[i]){
                ui->textEdit_3->setStyleSheet("color:green");
                colorflag3 = true;
                break;
            }
        }
        else{
            if(uu3[0]==letters[i]){
                ui->textEdit_3->setStyleSheet("color:#f8b500");
                colorflag3 = true;
            }
        }
    }

    if(!colorflag3){
        ui->textEdit_3->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 3){
            if(uu4[0]==letters[i]){
                ui->textEdit_4->setStyleSheet("color:green");
                colorflag4 = true;
                break;
            }
        }
        else{
            if(uu4[0]==letters[i]){
                ui->textEdit_4->setStyleSheet("color:#f8b500");
                colorflag4 = true;
            }
        }
    }

    if(!colorflag4){
        ui->textEdit_4->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 4){
            if(uu5[0]==letters[i]){
                ui->textEdit_5->setStyleSheet("color:green");
                colorflag5 = true;
                break;
            }
        }
        else{
            if(uu5[0]==letters[i]){
                ui->textEdit_5->setStyleSheet("color:#f8b500");
                colorflag5 = true;
            }
        }
    }

    if(!colorflag5){
        ui->textEdit_5->setStyleSheet("color:red");
    }

    win1();
}




void wordle::on_pushButton_2_clicked()
{
    string tt1=ui->textEdit_6->toPlainText().toStdString();
    string tt2=ui->textEdit_7->toPlainText().toStdString();
    string tt3=ui->textEdit_8->toPlainText().toStdString();
    string tt4=ui->textEdit_9->toPlainText().toStdString();
    string tt5=ui->textEdit_10->toPlainText().toStdString();
    char uu1[1];//textedit上的字母
    strncpy(uu1, tt1.c_str(),1);
    char uu2[1];
    strncpy(uu2, tt2.c_str(),1);
    char uu3[1];
    strncpy(uu3, tt3.c_str(),1);
    char uu4[1];
    strncpy(uu4, tt4.c_str(),1);
    char uu5[1];
    strncpy(uu5, tt5.c_str(),1);

    bool colorflag1 = false;
    bool colorflag2 = false;
    bool colorflag3 = false;
    bool colorflag4 = false;
    bool colorflag5 = false;
    for (int i = 0; i < 5; i++)
    {
        if(i == 0){
            if(uu1[0]==letters[i]){
                ui->textEdit_6->setStyleSheet("color:green");
                colorflag1 = true;
                break;
            }
        }
        else{
            if(uu1[0]==letters[i]){
                ui->textEdit_6->setStyleSheet("color:#f8b500");
                colorflag1 = true;
            }
        }
    }

    if(!colorflag1){
        ui->textEdit_6->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 1){
            if(uu2[0]==letters[i]){
                ui->textEdit_7->setStyleSheet("color:green");
                colorflag2 = true;
                break;
            }
        }
        else{
            if(uu2[0]==letters[i]){
                ui->textEdit_7->setStyleSheet("color:#f8b500");
                colorflag2 = true;
            }
        }
    }

    if(!colorflag2){
        ui->textEdit_7->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 2){
            if(uu3[0]==letters[i]){
                ui->textEdit_8->setStyleSheet("color:green");
                colorflag3 = true;
                break;
            }
        }
        else{
            if(uu3[0]==letters[i]){
                ui->textEdit_8->setStyleSheet("color:#f8b500");
                colorflag3 = true;
            }
        }
    }

    if(!colorflag3){
        ui->textEdit_8->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 3){
            if(uu4[0]==letters[i]){
                ui->textEdit_9->setStyleSheet("color:green");
                colorflag4 = true;
                break;
            }
        }
        else{
            if(uu4[0]==letters[i]){
                ui->textEdit_9->setStyleSheet("color:#f8b500");
                colorflag4 = true;
            }
        }
    }

    if(!colorflag4){
        ui->textEdit_9->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 4){
            if(uu5[0]==letters[i]){
                ui->textEdit_10->setStyleSheet("color:green");
                colorflag5 = true;
                break;
            }
        }
        else{
            if(uu5[0]==letters[i]){
                ui->textEdit_10->setStyleSheet("color:#f8b500");
                colorflag5 = true;
            }
        }
    }

    if(!colorflag5){
        ui->textEdit_10->setStyleSheet("color:red");
    }

    win2();
}

void wordle::on_pushButton_3_clicked()
{
    string tt1=ui->textEdit_11->toPlainText().toStdString();
    string tt2=ui->textEdit_12->toPlainText().toStdString();
    string tt3=ui->textEdit_13->toPlainText().toStdString();
    string tt4=ui->textEdit_14->toPlainText().toStdString();
    string tt5=ui->textEdit_15->toPlainText().toStdString();
    char uu1[1];//textedit上的字母
    strncpy(uu1, tt1.c_str(),1);
    char uu2[1];
    strncpy(uu2, tt2.c_str(),1);
    char uu3[1];
    strncpy(uu3, tt3.c_str(),1);
    char uu4[1];
    strncpy(uu4, tt4.c_str(),1);
    char uu5[1];
    strncpy(uu5, tt5.c_str(),1);

    bool colorflag1 = false;
    bool colorflag2 = false;
    bool colorflag3 = false;
    bool colorflag4 = false;
    bool colorflag5 = false;
    for (int i = 0; i < 5; i++)
    {
        if(i == 0){
            if(uu1[0]==letters[i]){
                ui->textEdit_11->setStyleSheet("color:green");
                colorflag1 = true;
                break;
            }
        }
        else{
            if(uu1[0]==letters[i]){
                ui->textEdit_11->setStyleSheet("color:#f8b500");
                colorflag1 = true;
            }
        }
    }

    if(!colorflag1){
        ui->textEdit_11->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 1){
            if(uu2[0]==letters[i]){
                ui->textEdit_12->setStyleSheet("color:green");
                colorflag2 = true;
                break;
            }
        }
        else{
            if(uu2[0]==letters[i]){
                ui->textEdit_12->setStyleSheet("color:#f8b500");
                colorflag2 = true;
            }
        }
    }

    if(!colorflag2){
        ui->textEdit_12->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 2){
            if(uu3[0]==letters[i]){
                ui->textEdit_13->setStyleSheet("color:green");
                colorflag3 = true;
                break;
            }
        }
        else{
            if(uu3[0]==letters[i]){
                ui->textEdit_13->setStyleSheet("color:#f8b500");
                colorflag3 = true;
            }
        }
    }

    if(!colorflag3){
        ui->textEdit_13->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 3){
            if(uu4[0]==letters[i]){
                ui->textEdit_14->setStyleSheet("color:green");
                colorflag4 = true;
                break;
            }
        }
        else{
            if(uu4[0]==letters[i]){
                ui->textEdit_14->setStyleSheet("color:#f8b500");
                colorflag4 = true;
            }
        }
    }

    if(!colorflag4){
        ui->textEdit_14->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 4){
            if(uu5[0]==letters[i]){
                ui->textEdit_15->setStyleSheet("color:green");
                colorflag5 = true;
                break;
            }
        }
        else{
            if(uu5[0]==letters[i]){
                ui->textEdit_15->setStyleSheet("color:#f8b500");
                colorflag5 = true;
            }
        }
    }

    if(!colorflag5){
        ui->textEdit_15->setStyleSheet("color:red");
    }
    win3();
}

void wordle::on_pushButton_4_clicked()
{
    string tt1=ui->textEdit_16->toPlainText().toStdString();
    string tt2=ui->textEdit_17->toPlainText().toStdString();
    string tt3=ui->textEdit_18->toPlainText().toStdString();
    string tt4=ui->textEdit_19->toPlainText().toStdString();
    string tt5=ui->textEdit_20->toPlainText().toStdString();
    char uu1[1];//textedit上的字母
    strncpy(uu1, tt1.c_str(),1);
    char uu2[1];
    strncpy(uu2, tt2.c_str(),1);
    char uu3[1];
    strncpy(uu3, tt3.c_str(),1);
    char uu4[1];
    strncpy(uu4, tt4.c_str(),1);
    char uu5[1];
    strncpy(uu5, tt5.c_str(),1);

    bool colorflag1 = false;
    bool colorflag2 = false;
    bool colorflag3 = false;
    bool colorflag4 = false;
    bool colorflag5 = false;
    for (int i = 0; i < 5; i++)
    {
        if(i == 0){
            if(uu1[0]==letters[i]){
                ui->textEdit_16->setStyleSheet("color:green");
                colorflag1 = true;
                break;
            }
        }
        else{
            if(uu1[0]==letters[i]){
                ui->textEdit_16->setStyleSheet("color:#f8b500");
                colorflag1 = true;
            }
        }
    }

    if(!colorflag1){
        ui->textEdit_16->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 1){
            if(uu2[0]==letters[i]){
                ui->textEdit_17->setStyleSheet("color:green");
                colorflag2 = true;
                break;
            }
        }
        else{
            if(uu2[0]==letters[i]){
                ui->textEdit_17->setStyleSheet("color:#f8b500");
                colorflag2 = true;
            }
        }
    }

    if(!colorflag2){
        ui->textEdit_17->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 2){
            if(uu3[0]==letters[i]){
                ui->textEdit_18->setStyleSheet("color:green");
                colorflag3 = true;
                break;
            }
        }
        else{
            if(uu3[0]==letters[i]){
                ui->textEdit_18->setStyleSheet("color:#f8b500");
                colorflag3 = true;
            }
        }
    }

    if(!colorflag3){
        ui->textEdit_18->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 3){
            if(uu4[0]==letters[i]){
                ui->textEdit_19->setStyleSheet("color:green");
                colorflag4 = true;
                break;
            }
        }
        else{
            if(uu4[0]==letters[i]){
                ui->textEdit_19->setStyleSheet("color:#f8b500");
                colorflag4 = true;
            }
        }
    }

    if(!colorflag4){
        ui->textEdit_19->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 4){
            if(uu5[0]==letters[i]){
                ui->textEdit_20->setStyleSheet("color:green");
                colorflag5 = true;
                break;
            }
        }
        else{
            if(uu5[0]==letters[i]){
                ui->textEdit_20->setStyleSheet("color:#f8b500");
                colorflag5 = true;
            }
        }
    }

    if(!colorflag5){
        ui->textEdit_20->setStyleSheet("color:red");
    }

    win4();
}


void wordle::on_pushButton_5_clicked()
{
    string tt1=ui->textEdit_21->toPlainText().toStdString();
    string tt2=ui->textEdit_22->toPlainText().toStdString();
    string tt3=ui->textEdit_23->toPlainText().toStdString();
    string tt4=ui->textEdit_24->toPlainText().toStdString();
    string tt5=ui->textEdit_25->toPlainText().toStdString();
    char uu1[1];//textedit上的字母
    strncpy(uu1, tt1.c_str(),1);
    char uu2[1];
    strncpy(uu2, tt2.c_str(),1);
    char uu3[1];
    strncpy(uu3, tt3.c_str(),1);
    char uu4[1];
    strncpy(uu4, tt4.c_str(),1);
    char uu5[1];
    strncpy(uu5, tt5.c_str(),1);

    bool colorflag1 = false;
    bool colorflag2 = false;
    bool colorflag3 = false;
    bool colorflag4 = false;
    bool colorflag5 = false;
    for (int i = 0; i < 5; i++)
    {
        if(i == 0){
            if(uu1[0]==letters[i]){
                ui->textEdit_21->setStyleSheet("color:green");
                colorflag1 = true;
                break;
            }
        }
        else{
            if(uu1[0]==letters[i]){
                ui->textEdit_21->setStyleSheet("color:#f8b500");
                colorflag1 = true;
            }
        }
    }

    if(!colorflag1){
        ui->textEdit_21->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 1){
            if(uu2[0]==letters[i]){
                ui->textEdit_22->setStyleSheet("color:green");
                colorflag2 = true;
                break;
            }
        }
        else{
            if(uu2[0]==letters[i]){
                ui->textEdit_22->setStyleSheet("color:#f8b500");
                colorflag2 = true;
            }
        }
    }

    if(!colorflag2){
        ui->textEdit_22->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 2){
            if(uu3[0]==letters[i]){
                ui->textEdit_23->setStyleSheet("color:green");
                colorflag3 = true;
                break;
            }
        }
        else{
            if(uu3[0]==letters[i]){
                ui->textEdit_23->setStyleSheet("color:#f8b500");
                colorflag3 = true;
            }
        }
    }

    if(!colorflag3){
        ui->textEdit_23->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 3){
            if(uu4[0]==letters[i]){
                ui->textEdit_24->setStyleSheet("color:green");
                colorflag4 = true;
                break;
            }
        }
        else{
            if(uu4[0]==letters[i]){
                ui->textEdit_24->setStyleSheet("color:#f8b500");
                colorflag4 = true;
            }
        }
    }

    if(!colorflag4){
        ui->textEdit_24->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 4){
            if(uu5[0]==letters[i]){
                ui->textEdit_25->setStyleSheet("color:green");
                colorflag5 = true;
                break;
            }
        }
        else{
            if(uu5[0]==letters[i]){
                ui->textEdit_25->setStyleSheet("color:#f8b500");
                colorflag5 = true;
            }
        }
    }

    if(!colorflag5){
        ui->textEdit_25->setStyleSheet("color:red");
    }

    win5();
}


void wordle::on_pushButton_6_clicked()
{
    string tt1=ui->textEdit_26->toPlainText().toStdString();
    string tt2=ui->textEdit_27->toPlainText().toStdString();
    string tt3=ui->textEdit_28->toPlainText().toStdString();
    string tt4=ui->textEdit_29->toPlainText().toStdString();
    string tt5=ui->textEdit_30->toPlainText().toStdString();
    char uu1[1];//textedit上的字母
    strncpy(uu1, tt1.c_str(),1);
    char uu2[1];
    strncpy(uu2, tt2.c_str(),1);
    char uu3[1];
    strncpy(uu3, tt3.c_str(),1);
    char uu4[1];
    strncpy(uu4, tt4.c_str(),1);
    char uu5[1];
    strncpy(uu5, tt5.c_str(),1);

    bool colorflag1 = false;
    bool colorflag2 = false;
    bool colorflag3 = false;
    bool colorflag4 = false;
    bool colorflag5 = false;
    for (int i = 0; i < 5; i++)
    {
        if(i == 0){
            if(uu1[0]==letters[i]){
                ui->textEdit_26->setStyleSheet("color:green");
                colorflag1 = true;
                break;
            }
        }
        else{
            if(uu1[0]==letters[i]){
                ui->textEdit_26->setStyleSheet("color:#f8b500");
                colorflag1 = true;
            }
        }
    }

    if(!colorflag1){
        ui->textEdit_26->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 1){
            if(uu2[0]==letters[i]){
                ui->textEdit_27->setStyleSheet("color:green");
                colorflag2 = true;
                break;
            }
        }
        else{
            if(uu2[0]==letters[i]){
                ui->textEdit_27->setStyleSheet("color:#f8b500");
                colorflag2 = true;
            }
        }
    }

    if(!colorflag2){
        ui->textEdit_27->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 2){
            if(uu3[0]==letters[i]){
                ui->textEdit_28->setStyleSheet("color:green");
                colorflag3 = true;
                break;
            }
        }
        else{
            if(uu3[0]==letters[i]){
                ui->textEdit_28->setStyleSheet("color:#f8b500");
                colorflag3 = true;
            }
        }
    }

    if(!colorflag3){
        ui->textEdit_28->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 3){
            if(uu4[0]==letters[i]){
                ui->textEdit_29->setStyleSheet("color:green");
                colorflag4 = true;
                break;
            }
        }
        else{
            if(uu4[0]==letters[i]){
                ui->textEdit_29->setStyleSheet("color:#f8b500");
                colorflag4 = true;
            }
        }
    }

    if(!colorflag4){
        ui->textEdit_29->setStyleSheet("color:red");
    }

    for (int i = 0; i < 5; i++)
    {
        if(i == 4){
            if(uu5[0]==letters[i]){
                ui->textEdit_30->setStyleSheet("color:green");
                colorflag5 = true;
                break;
            }
        }
        else{
            if(uu5[0]==letters[i]){
                ui->textEdit_30->setStyleSheet("color:#f8b500");
                colorflag5 = true;
            }
        }
    }

    if(!colorflag5){
        ui->textEdit_30->setStyleSheet("color:red");
    }

    win6();
}

void wordle::win1()
{
    QString answer1=ui->textEdit->toPlainText()+ui->textEdit_2->toPlainText()+ui->textEdit_3->toPlainText()+ui->textEdit_4->toPlainText()+ui->textEdit_5->toPlainText();
    if(answer1==qwords)
    {
        QMessageBox::information(this,"Result","You win!");
    }
    else
    {
        Line1();
    }
}

void wordle::win2()
{
    QString answer1=ui->textEdit_6->toPlainText()+ui->textEdit_7->toPlainText()+ui->textEdit_8->toPlainText()+ui->textEdit_9->toPlainText()+ui->textEdit_10->toPlainText();
    if(answer1==qwords)
    {
        QMessageBox::information(this,"Result","You win!");
    }
    else
    {
        Line2();
    }
}

void wordle::win3()
{
    QString answer1=ui->textEdit_11->toPlainText()+ui->textEdit_12->toPlainText()+ui->textEdit_13->toPlainText()+ui->textEdit_14->toPlainText()+ui->textEdit_15->toPlainText();
    if(answer1==qwords)
    {
        QMessageBox::information(this,"Result","You win!");
    }
    else
    {
        Line3();
    }
}

void wordle::win4()
{
    QString answer1=ui->textEdit_16->toPlainText()+ui->textEdit_17->toPlainText()+ui->textEdit_18->toPlainText()+ui->textEdit_19->toPlainText()+ui->textEdit_20->toPlainText();
    if(answer1==qwords)
    {
        QMessageBox::information(this,"Result","You win!");
    }
    else
    {
        Line4();
    }
}

void wordle::win5()
{
    QString answer1=ui->textEdit_21->toPlainText()+ui->textEdit_22->toPlainText()+ui->textEdit_23->toPlainText()+ui->textEdit_24->toPlainText()+ui->textEdit_25->toPlainText();
    if(answer1==qwords)
    {
        QMessageBox::information(this,"Result","You win!");
    }
    else
    {
        Line5();
    }
}

void wordle::win6()
{
    QString answer1=ui->textEdit_26->toPlainText()+ui->textEdit_27->toPlainText()+ui->textEdit_28->toPlainText()+ui->textEdit_29->toPlainText()+ui->textEdit_30->toPlainText();
    if(answer1==qwords)
    {
        QMessageBox::information(this,"Result","You win!");
    }
    else
    {
        ui->label_3->setText(qwords);
        QMessageBox::information(this,"Result","You lost the game!");
        Line6();
    }
}

