#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/EffectDisplayInfo.h"
#include "mc/deps/input/RectangleArea.h"

// auto generated forward declare list
// clang-format off
class Config;
class IClientInstance;
// clang-format on

class MobEffectsLayout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>              mClient;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                mTouchArea;
    ::ll::TypedStorage<8, 24, std::vector<EffectDisplayInfo>> mEffectDisplays;
    ::ll::TypedStorage<4, 4, int>                             mLastEffectCount;
    ::ll::TypedStorage<4, 4, int>                             mIconStartY;
    ::ll::TypedStorage<4, 4, int>                             mIconStartX;
    ::ll::TypedStorage<4, 4, int>                             mIconSize;
    ::ll::TypedStorage<4, 4, int>                             mOffsetToStartingPositionY;
    ::ll::TypedStorage<4, 4, int>                             mOffsetToStartingPositionX;
    ::ll::TypedStorage<4, 4, int>                             mWidth;
    ::ll::TypedStorage<4, 4, int>                             mHeight;
    ::ll::TypedStorage<4, 4, float>                           mSafeZoneStartY;
    ::ll::TypedStorage<4, 4, float>                           mSafeZoneStartX;
    ::ll::TypedStorage<4, 4, float>                           mScreenHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectsLayout& operator=(MobEffectsLayout const&);
    MobEffectsLayout(MobEffectsLayout const&);
    MobEffectsLayout();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MobEffectsLayout(::IClientInstance&);

    MCNAPI void _updateAnimations();

    MCNAPI void _updatePositions();

    MCNAPI std::vector<EffectDisplayInfo>& getEffectsDisplayInfo();

    MCNAPI ::RectangleArea const& getTouchArea() const;

    MCNAPI void onConfigChanged(::Config const&);

    MCNAPI void setHeight(int);

    MCNAPI void setOffsetToStartingPositionX(int);

    MCNAPI void setOffsetToStartingPositionY(int);

    MCNAPI void setWidth(int);

    MCNAPI void tick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/RectangleArea.h"

// auto generated forward declare list
// clang-format off
class Config;
class IClientInstance;
struct EffectDisplayInfo;
// clang-format on

class MobEffectsLayout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                  mClient;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                    mTouchArea;
    ::ll::TypedStorage<8, 24, ::std::vector<::EffectDisplayInfo>> mEffectDisplays;
    ::ll::TypedStorage<4, 4, int>                                 mLastEffectCount;
    ::ll::TypedStorage<4, 4, int>                                 mIconStartY;
    ::ll::TypedStorage<4, 4, int>                                 mIconStartX;
    ::ll::TypedStorage<4, 4, int>                                 mIconSize;
    ::ll::TypedStorage<4, 4, int>                                 mOffsetToStartingPositionY;
    ::ll::TypedStorage<4, 4, int>                                 mOffsetToStartingPositionX;
    ::ll::TypedStorage<4, 4, int>                                 mWidth;
    ::ll::TypedStorage<4, 4, int>                                 mHeight;
    ::ll::TypedStorage<4, 4, float>                               mSafeZoneStartY;
    ::ll::TypedStorage<4, 4, float>                               mSafeZoneStartX;
    ::ll::TypedStorage<4, 4, float>                               mScreenHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectsLayout& operator=(MobEffectsLayout const&);
    MobEffectsLayout(MobEffectsLayout const&);
    MobEffectsLayout();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MobEffectsLayout(::IClientInstance& client);

    MCAPI void _updateAnimations();

    MCAPI void _updatePositions();

    MCAPI void onConfigChanged(::Config const& c);

    MCAPI void setHeight(int val);

    MCAPI void setWidth(int val);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IClientInstance& client);
    // NOLINTEND
};
#else // @header-generator platform
class MobEffectsLayout {};
#endif // @header-generator platform
#endif // @header-generator platform
