const string SyberiaServer_ModPreffix = "[SYBERIA SERVER] ";
const bool SyberiaServer_DebugMode = true;

void SybLogSrv(string message)
{
	if (SyberiaServer_DebugMode) Print(SyberiaServer_ModPreffix + message);
}

const string SYBERIA_DB_NAME = "Syberia";

// STORAGE VERSIONING
const int SYBERIA_V100_VERSION = 7834100;

// ADV MED
const float DIRTY_SYRINGE_BLOOD_INFECTION_CHANCE = 0.2;

const float SEPSIS_STAGE1_TIME_SEC = 600; // 10 min
const float SEPSIS_STAGE2_TIME_SEC = 1200; // 20 min
const float SEPSIS_DEATH_TIME_SEC = 600; // 10 min

const float ZVIRUS_STAGE1_TIME_SEC = 300;
const float ZVIRUS_STAGE2_TIME_SEC = 900;
const float ZVIRUS_DEATH_TIME_SEC = 300;
const float ZVIRUS_BLOOD_REGEN_PER_SEC = 30;
const float ZVIRUS_ZOMBIE_HIT_CHANCE = 0.2;
const float ZVIRUS_ANTIDOT_BLOOD_DMG_01 = 0.3;
const float ZVIRUS_ANTIDOT_HEALTH_DMG_01 = 0.2;

const float PAIN_LVL1_TIME_SEC = 60 * 5;
const float PAIN_LVL2_TIME_SEC = 60 * 30;
const float PAIN_LVL3_TIME_SEC = 60 * 60;
const float PAIN_MAX_DURATION_SEC = 60 * 60 * 4;

const float BLEEDING_BULLETHIT_HEALTHLOSE_PER_SECOND = 0.005;
const float BLEEDING_BULLETHIT_OPEN_PER_SECOND = 15;
const float BLEEDING_BULLETHIT_CUPD1_PER_SECOND = 3;
const float BLEEDING_BULLETHIT_CUPD2_PER_SECOND = 0.5;
const float BLEEDING_BULLETHIT_REMOVE_BANDAGED_TIME_SEC = -1; // DISABLED

const float BLEEDING_KNIFEHIT_HEALTHLOSE_PER_SECOND = 0.005;
const float BLEEDING_KNIFEHIT_OPEN_PER_SECOND = 15;
const float BLEEDING_KNIFEHIT_CUPD1_PER_SECOND = 3;
const float BLEEDING_KNIFEHIT_CUPD2_PER_SECOND = 0.5;
const float BLEEDING_KNIFEHIT_REMOVE_BANDAGED_TIME_SEC = 60 * 30; // 30 min

const float BLEEDING_VISCERA_BLOODLOSE_PER_SECOND = 10;
const float BLEEDING_VISCERA_HEALTHLOSE_PER_SECOND = 0.01;

const float BLEEDING_HEMATOMA_BLOODLOSE_PER_SECOND = 0;
const float BLEEDING_HEMATOMA_HEALTHLOSE_PER_SECOND = 0.001;

const float HEMATOMA_REGEN_TIMER_SEC = 60 * 15;
const float HEMATOMA_REGEN_TIME_BOOST_ON_SALVE = 5;
const float CUTHIT_REGEN_TIMER_SEC = 60 * 5;

const float HEMOLOGIC_SHOCK_DIETIME_SEC = 60; 

const float CONCUSSION_REGEN_TIME_SEC = 60 * 30; //30 min

const float HEMOSTATIC_EFFECT_MODIFIER = 0.4; // 40% of total bloodlose
const float HEMATOPOIESIS_EFFECT_BLOOD_PER_SEC = 5;

const float ADRENALIN_EFFECT_SHOCK_01_LVL1_PER_SEC = 1 / 60;
const float ADRENALIN_EFFECT_SHOCK_01_LVL2_PER_SEC = 1 / 30;
const float ADRENALIN_EFFECT_SHOCK_01_LVL3_PER_SEC = 1 / 5;

const float OVERDOSE_DECREMENT_PER_SEC = 0.0005;
const float OVERDOSE_UNCON_CHANGE_PER_SEC = 0.01;

const bool ZOMBIE_OPEN_DOOR_ENABLE = true;
const float ZOMBIE_OPEN_DOOR_DISTANCE = 1.6;