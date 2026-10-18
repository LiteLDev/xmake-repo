#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/client/gui/oreui/routing/RouterHistoryAdapter.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/client/gui/oreui/routing/RouterHistoryAdapter.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RouterCommandGroup : public ::OreUI::CommandGroupBase<OreUI::RouterCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 256> mRouter;
    ::ll::UntypedStorage<8, 144> mPush;
    ::ll::UntypedStorage<8, 144> mReplace;
    ::ll::UntypedStorage<8, 144> mBack;
    ::ll::UntypedStorage<8, 144> mGo;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RouterCommandGroup();
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
class RouterCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::RouterCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 312, ::OreUI::RouterHistoryAdapter>                      mRouter;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mPush;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mReplace;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                mBack;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int>>           mGo;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RouterCommandGroup(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND
};
#else // @header-generator platform
class RouterCommandGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
