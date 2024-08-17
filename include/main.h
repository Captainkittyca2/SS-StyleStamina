/**
 * @file main.h
 * @author Captain Kitty Cat (youtube.com/@captainkittyca2)
 * @brief
 * @version 0.5
 * @date 2024-08-17
 *
 * @copyright Copyright (c) 2024
 *
 */
#pragma once
#include <display/console.h>
#include <tp/f_ap_game.h>
#include <tp/d_meter2.h>
#include <tp/control.h>
#include <tp/d_a_alink.h>
#include <tp/d_stage.h>

#include <cinttypes>

namespace mod
{
    void main();
    class Mod
    {
       public:
        Mod();
        void init();

       private:
        // Console
        libtp::display::Console c;
        libtp::tp::d_a_alink::daAlink_BckData* ( *shieldManually )(libtp::tp::d_a_alink::daAlink* linkActrPtr, libtp::tp::d_a_alink::daAlink_ANM i_anmID) = nullptr;
        bool ( *return_messageSmthg)(libtp::tp::control::TControl* control, const void* TProcessor, uint16_t unk3, uint16_t msgID) = nullptr;
        bool ( *expiredMeter)(uint16_t item) = nullptr;
        void ( *onUI)(libtp::tp::d_meter2_draw::dMeter2Draw_c* dMeterDrawPtr) = nullptr;
        void ( *offUI)(libtp::tp::d_meter2_draw::dMeter2Draw_c* dMeterDrawPtr) = nullptr;
        void ( *return_drawMeter2 )( libtp::tp::d_meter2_draw::dMeter2Draw_c* dMeterDrawPtr) = nullptr;
        void ( *unSheathShield)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        void ( *return_checkLinkStatus)(libtp::tp::d_meter2::dMeter2_c* dMeter2Ptr) = nullptr;
        void ( *gotAnItem)(uint8_t items) = nullptr;
        void ( *itemRent)() = nullptr;
        void ( *return_oxygenAndStamina)(libtp::tp::d_meter2::dMeter2_c* dMeter2Ptr) = nullptr;
        void ( *shieldEquipped)(uint8_t shieldID) = nullptr;
        int32_t ( *initMap)(void* stageDt, libtp::tp::d_stage::stage_dzr_header_entry* i_data, int32_t num, void* raw_data) = nullptr;
        int32_t ( *return_rollFront)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_executee)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_cutnormalInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t parammmm) = nullptr;
        int32_t ( *return_airCutInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t airCut) = nullptr;
        int32_t ( *return_guardSlipInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t abc, void* hi) = nullptr;
        int32_t ( *return_swimWait)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_swimMove)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_waitInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_checkAtnWait)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_upperguardCheck)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_autoJumping)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_falling)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_breakingGuard)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_cutSpinInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t, int32_t) = nullptr;
        int32_t ( *return_cutFinishInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t typeOfCut) = nullptr;
        int32_t ( *return_cutSpinChargeInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_cutLargeJumpChargeInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_cutLargeJumpInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_cutJumpUpInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_cutHeadInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_sideStepInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t) = nullptr;
        int32_t ( *return_atnMove)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_backJumpInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t) = nullptr;
        int32_t ( *return_atnActrMve)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *throwIron)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *ironRepresentative)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *ironReturning)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_climbMoveUpDownInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t) = nullptr;
        int32_t ( *return_climbMoveSideInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_climbWait)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_climbUpStartInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t) = nullptr;
        int32_t ( *return_hangWait)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_hangMove)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_hangFallStart)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_checkRestHP)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_grabThrowInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t) = nullptr;
        int32_t ( *return_grabReadyInit)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_ladderMove)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_sideRollCheck)(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t) = nullptr;
        int32_t ( *return_guardBattle)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;
        int32_t ( *return_crawlMovement)(libtp::tp::d_a_alink::daAlink* linkActrPtr) = nullptr;

        libtp::tp::d_a_alink::daAlink_BckData* manualShield(libtp::tp::d_a_alink::daAlink* linkActrPtr, libtp::tp::d_a_alink::daAlink_ANM i_anmID);
        bool customMessageCode(libtp::tp::control::TControl* control, const void* TProcessor, uint16_t unk3, uint16_t msgID);
        bool meterExpiration(uint16_t ittem);
        void UICheck(libtp::tp::d_meter2_draw::dMeter2Draw_c* dMeterDrawPtr);
        void UICheck2(libtp::tp::d_meter2_draw::dMeter2Draw_c* dMeterDrawPtr);
        void drawMeter2( libtp::tp::d_meter2_draw::dMeter2Draw_c* dMeterDrawPtr);
        void unSheathingShield(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        void checkLinkStatus(libtp::tp::d_meter2::dMeter2_c* dMeter2Ptr);
        void gotIt(uint8_t items);
        void rentAnItem();
        void oxygenAndStamina(libtp::tp::d_meter2::dMeter2_c* dMeter2Ptr);
        void equippingTheShield(uint8_t);
        int32_t mapInitialized(void* stageDt, libtp::tp::d_stage::stage_dzr_header_entry* i_data, int32_t num, void* raw_data);
        int32_t rollFront(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t executee(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t cutnormalInit(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t parammmm);
        int32_t airCutInit(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t airCut);
        int32_t guardSlipped(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t abc, void* hi);
        int32_t swimWaiting(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t swimMoving(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t swimDiving(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t swimUpChecking(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t waitingInit(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t atnWaitChecking(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t upperGuardChecking(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t currentlyAutoJumping(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t currentlyFalling(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t guardIsBreaking(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t cutSpinInit(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t, int32_t);
        int32_t cutFinishInit(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t);
        int32_t cutSpinChargeInit(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t cutLargeJumpChargeInit(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t cutLargeJumpInit(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t cutJumpUpInit(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t cutHeadInit(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t sideSteppingInit(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t);
        int32_t atnMoving(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t backJumpingInit(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t);
        int32_t atnActrMve(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t ironThrower(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t representingTheIron(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t returningTheIron(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t climbMoveUpDownInitialize(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t);
        int32_t climbMoveSideInitialize(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t climbWait(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t climbUpStartInitialize(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t);
        int32_t yoHangWait(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t yoHangMove(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t yoHangFallStart(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t restCheckPlease(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t grabThrowerInitialized(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t);
        int32_t grabReadyInitialized(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t moveLadderPlease(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t sideRollChecking(libtp::tp::d_a_alink::daAlink* linkActrPtr, int32_t);
        int32_t guardBattle(libtp::tp::d_a_alink::daAlink* linkActrPtr);
        int32_t crawlMovementContinue(libtp::tp::d_a_alink::daAlink* linkActrPtr);
    };
}     // namespace mod