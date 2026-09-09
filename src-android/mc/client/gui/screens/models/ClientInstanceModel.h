#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ClientModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class FontHandle;
class IClientInstance;
class ItemStackBase;
class Option;
class PlayerCommandOrigin;
class RectangleArea;
class Vec2;
struct GameRuleId;
// clang-format on

class ClientInstanceModel : public ::ClientModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstanceModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceModel();

    virtual bool hasCommandsEnabled() const;

    virtual std::string getFormattedHoverText(::ItemStackBase const&, bool const);

    virtual bool achievementsWillBeDisabledOnLoad();

    virtual bool hasAchievementsDisabled();

    virtual std::string getLevelName();

    virtual int getGameDifficulty();

    virtual int getGameType();

    virtual void setGameType(::GameType);

    virtual int getGenerator();

    virtual bool getStartWithMap();

    virtual bool isAlwaysDay();

    virtual bool isGameRule(::GameRuleId);

    virtual bool isImmutableWorld();

    virtual std::unique_ptr<PlayerCommandOrigin> makePlayerCommandOrigin();

    virtual void setCommandsEnabled(bool);

    virtual void disableAchievements();

    virtual float getGuiScale() const;

    virtual ::Vec2 getScreenSize() const;

    virtual ::RectangleArea getSafeScreenZoneArea() const;

    virtual ::RectangleArea getWYSIWYGSafeScreenZoneArea() const;

    virtual ::RectangleArea getLayoutCustomizationSubPanelRectangle() const;

    virtual ::RectangleArea getLayoutCustomizationMainPanelRectangle() const;

    virtual ::RectangleArea getWYSIWYGBottomHudReservedArea() const;

    virtual ::RectangleArea const& getHUDHotbarRectangle() const;

    virtual ::Option const& getGuiScaleOption() const;

    virtual void setGuiScaleOffset(int);

    virtual ::FontHandle getFontHandle() const;

    virtual void notifyForLeaveGame();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientInstanceModel(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $hasCommandsEnabled() const;

    MCNAPI std::string $getFormattedHoverText(::ItemStackBase const&, bool const);

    MCNAPI bool $achievementsWillBeDisabledOnLoad();

    MCNAPI bool $hasAchievementsDisabled();

    MCNAPI std::string $getLevelName();

    MCNAPI int $getGameDifficulty();

    MCNAPI int $getGameType();

    MCNAPI void $setGameType(::GameType);

    MCNAPI int $getGenerator();

    MCNAPI bool $getStartWithMap();

    MCNAPI bool $isAlwaysDay();

    MCNAPI bool $isGameRule(::GameRuleId);

    MCNAPI bool $isImmutableWorld();

    MCNAPI std::unique_ptr<PlayerCommandOrigin> $makePlayerCommandOrigin();

    MCNAPI void $setCommandsEnabled(bool);

    MCNAPI void $disableAchievements();

    MCNAPI float $getGuiScale() const;

    MCNAPI ::Vec2 $getScreenSize() const;

    MCNAPI ::RectangleArea $getSafeScreenZoneArea() const;

    MCNAPI ::RectangleArea $getWYSIWYGSafeScreenZoneArea() const;

    MCNAPI ::RectangleArea $getLayoutCustomizationSubPanelRectangle() const;

    MCNAPI ::RectangleArea $getLayoutCustomizationMainPanelRectangle() const;

    MCNAPI ::RectangleArea $getWYSIWYGBottomHudReservedArea() const;

    MCNAPI ::RectangleArea const& $getHUDHotbarRectangle() const;

    MCNAPI ::Option const& $getGuiScaleOption() const;

    MCNAPI void $setGuiScaleOffset(int);

    MCNAPI ::FontHandle $getFontHandle() const;

    MCNAPI void $notifyForLeaveGame();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
