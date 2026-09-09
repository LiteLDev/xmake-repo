#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/AlterationNode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::internal {

class CerealUpgraderBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                 mCtx;
    ::ll::TypedStorage<8, 208, ::Puv::internal::AlterationNode> mAlterations;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealUpgraderBase();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CerealUpgraderBase(::cereal::ReflectionCtx const&);

    MCNAPI void bindCallback(
        std::function<void(entt::meta_any&, entt::meta_any&)>,
        std::vector<std::string> const&,
        std::vector<std::string>
    );

    MCNAPI void ignore(std::vector<std::string> const&);

    MCNAPI void move(std::vector<std::string> const&, std::vector<std::string>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&);
    // NOLINTEND
};

} // namespace Puv::internal
