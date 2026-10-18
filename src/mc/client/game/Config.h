#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/PixelCalc.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftGame;
class OptionRegistry;
// clang-format on

class Config {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                              mWidth;
    ::ll::TypedStorage<4, 4, int>                              mHeight;
    ::ll::TypedStorage<4, 4, float>                            mGuiScale;
    ::ll::TypedStorage<4, 4, float>                            mInvGuiScale;
    ::ll::TypedStorage<4, 4, int>                              mGuiWidth;
    ::ll::TypedStorage<4, 4, int>                              mGuiHeight;
    ::ll::TypedStorage<4, 8, ::PixelCalc>                      mDpadScale;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame*>                mMinecraft;
    ::ll::TypedStorage<8, 16, std::shared_ptr<OptionRegistry>> mOptions;
    ::ll::TypedStorage<4, 4, ::InputMode>                      mCurrentInputMode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::InputMode getCurrentInputMode() const;

    MCNAPI ::PixelCalc const& getDpadScale() const;

    MCNAPI float getGuiScale() const;

    MCNAPI int getHeight() const;

    MCNAPI ::OptionRegistry& getOptions() const;

    MCNAPI int getWidth() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Config createConfig(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);
    // NOLINTEND
};
#else // @header-generator platform
class Config {};
#endif // @header-generator platform
