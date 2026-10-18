#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/util/ProfanityFilterContext.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ITTSEventManager;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/util/ProfanityFilterContext.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ITTSEventManager;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ScreenReaderCommandGroup : public ::OreUI::CommandGroupBase<OreUI::ScreenReaderCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<ITTSEventManager>> mTTSEventManager;
    ::ll::UntypedStorage<8, 16>                                mAppPlatform;
    ::ll::UntypedStorage<8, 144>                               mClear;
    ::ll::UntypedStorage<8, 144>                               mRead;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenReaderCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenReaderCommandGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _clear() const;

    MCNAPI void _read(std::string const&, ::ProfanityFilterContext, bool, bool, bool, bool) const;
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
class ScreenReaderCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::ScreenReaderCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ITTSEventManager>>    mTTSEventManager;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::AppPlatform>> mAppPlatform;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>   mClear;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::CallableImpl<void, ::std::string, ::ProfanityFilterContext, bool, bool, bool, bool>>
        mRead;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenReaderCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScreenReaderCommandGroup(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);

    MCAPI void _clear() const;

    MCAPI void _read(
        ::std::string const&     text,
        ::ProfanityFilterContext context,
        bool                     interruptable,
        bool                     required,
        bool                     background,
        bool                     playWhenEnabled
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class ScreenReaderCommandGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
