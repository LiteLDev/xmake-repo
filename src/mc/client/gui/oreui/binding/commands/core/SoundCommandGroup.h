#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class SoundPlayerInterface;
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class SoundPlayerInterface;
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class SoundCommandGroup : public ::OreUI::CommandGroupBase<OreUI::SoundCommandGroup> {
public:
    // SoundCommandGroup inner types define
    using SoundHandle = ulong;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mPlayer;
    ::ll::UntypedStorage<8, 144> mPlay;
    ::ll::UntypedStorage<8, 144> mFadeOut;
    ::ll::UntypedStorage<8, 144> mIsPlaying;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SoundCommandGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class SoundCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::SoundCommandGroup> {
public:
    // SoundCommandGroup inner types define
    using SoundHandle = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface>>               mPlayer;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<uint64, ::std::string, float, float>> mPlay;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, uint64, float>>                 mFadeOut;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<bool, uint64>>                        mIsPlaying;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SoundCommandGroup(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND
};
#else // @header-generator platform
class SoundCommandGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
