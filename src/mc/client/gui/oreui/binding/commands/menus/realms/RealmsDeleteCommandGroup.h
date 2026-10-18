#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class RealmsDeleteManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class RealmsDeleteCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::RealmsDeleteCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsDeleteManager>> mRealmsDeleteManager;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                 mTaskGroup;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int64>>                  mDeleteRealm;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsDeleteCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsDeleteCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsDeleteCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class RealmsDeleteCommandGroup {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
