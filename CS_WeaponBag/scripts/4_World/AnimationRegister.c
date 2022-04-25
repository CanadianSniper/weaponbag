modded class ModItemRegisterCallbacks
{
    override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterTwoHanded(pType, pBehavior);

        pType.AddItemInHandsProfileIK("CS_WeaponBag_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior,"dz/anims/anm/player/ik/two_handed/assault_g.anm");
		pType.AddItemInHandsProfileIK("CS_WeaponBag_D_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior,"dz/anims/anm/player/ik/two_handed/assault_g.anm");
    }
};