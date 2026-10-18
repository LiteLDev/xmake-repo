#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldCloudSyncCommandGroup : public ::OreUI::CommandGroupBase<OreUI::WorldCloudSyncCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mTaskGroup;
    ::ll::UntypedStorage<8, 144> mSetLocalOnly;
    ::ll::UntypedStorage<8, 144> mSetCloudSaved;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCloudSyncCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldCloudSyncCommandGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldCloudSyncCommandGroup(::OreUI::GameDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&);
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
class WorldCloudSyncCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::WorldCloudSyncCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                             mTaskGroup;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>>       mSetLocalOnly;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, bool>> mSetCloudSaved;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCloudSyncCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldCloudSyncCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldCloudSyncCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class WorldCloudSyncCommandGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
