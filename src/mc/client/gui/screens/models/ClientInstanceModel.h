#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceModel() /*override*/ = default;

    virtual bool hasCommandsEnabled() const /*override*/;

    virtual ::std::string getFormattedHoverText(::ItemStackBase const& item, bool const showCategory) /*override*/;

    virtual bool achievementsWillBeDisabledOnLoad() /*override*/;

    virtual bool hasAchievementsDisabled() /*override*/;

    virtual ::std::string getLevelName() /*override*/;

    virtual int getGameDifficulty() /*override*/;

    virtual int getGameType() /*override*/;

    virtual void setGameType(::GameType gameType) /*override*/;

    virtual int getGenerator() /*override*/;

    virtual bool getStartWithMap() /*override*/;

    virtual bool isAlwaysDay() /*override*/;

    virtual bool isGameRule(::GameRuleId gameRule) /*override*/;

    virtual bool isImmutableWorld() /*override*/;

    virtual ::std::unique_ptr<::PlayerCommandOrigin> makePlayerCommandOrigin() /*override*/;

    virtual void setCommandsEnabled(bool val) /*override*/;

    virtual void disableAchievements() /*override*/;

    virtual float getGuiScale() const /*override*/;

    virtual ::Vec2 getScreenSize() const /*override*/;

    virtual ::RectangleArea getSafeScreenZoneArea() const /*override*/;

    virtual ::RectangleArea getWYSIWYGSafeScreenZoneArea() const /*override*/;

    virtual ::RectangleArea getLayoutCustomizationSubPanelRectangle() const /*override*/;

    virtual ::RectangleArea getLayoutCustomizationMainPanelRectangle() const /*override*/;

    virtual ::RectangleArea getWYSIWYGBottomHudReservedArea() const /*override*/;

    virtual ::RectangleArea const& getHUDHotbarRectangle() const /*override*/;

    virtual ::Option const& getGuiScaleOption() const /*override*/;

    virtual void setGuiScaleOffset(int guiScale) /*override*/;

    virtual ::FontHandle getFontHandle() const /*override*/;

    virtual void notifyForLeaveGame() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $hasCommandsEnabled() const;

    MCAPI ::std::string $getFormattedHoverText(::ItemStackBase const& item, bool const showCategory);

    MCAPI bool $achievementsWillBeDisabledOnLoad();

    MCAPI bool $hasAchievementsDisabled();

    MCAPI ::std::string $getLevelName();

    MCAPI int $getGameDifficulty();

    MCAPI int $getGameType();

    MCAPI void $setGameType(::GameType gameType);

    MCAPI int $getGenerator();

    MCAPI bool $getStartWithMap();

    MCAPI bool $isAlwaysDay();

    MCAPI bool $isGameRule(::GameRuleId gameRule);

    MCAPI bool $isImmutableWorld();

    MCAPI ::std::unique_ptr<::PlayerCommandOrigin> $makePlayerCommandOrigin();

    MCAPI void $setCommandsEnabled(bool val);

    MCAPI void $disableAchievements();

    MCAPI float $getGuiScale() const;

    MCAPI ::Vec2 $getScreenSize() const;

    MCAPI ::RectangleArea $getSafeScreenZoneArea() const;

    MCAPI ::RectangleArea $getWYSIWYGSafeScreenZoneArea() const;

    MCAPI ::RectangleArea $getLayoutCustomizationSubPanelRectangle() const;

    MCAPI ::RectangleArea $getLayoutCustomizationMainPanelRectangle() const;

    MCAPI ::RectangleArea $getWYSIWYGBottomHudReservedArea() const;

    MCAPI ::RectangleArea const& $getHUDHotbarRectangle() const;

    MCAPI ::Option const& $getGuiScaleOption() const;

    MCAPI void $setGuiScaleOffset(int guiScale);

    MCAPI ::FontHandle $getFontHandle() const;

    MCAPI void $notifyForLeaveGame();
    // NOLINTEND
};
#else // @header-generator platform
class ClientInstanceModel {};
#endif // @header-generator platform
#endif // @header-generator platform
