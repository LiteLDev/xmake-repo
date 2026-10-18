#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/AlterationNode.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::internal {

class CerealUpgraderBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                 mCtx;
    ::ll::TypedStorage<8, 208, ::Puv::internal::AlterationNode> mAlterations;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24>  mUnk52983c;
    ::ll::UntypedStorage<8, 224> mUnkcce99d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CerealUpgraderBase& operator=(CerealUpgraderBase const&);
    CerealUpgraderBase(CerealUpgraderBase const&);
#endif // @header-generator platform
    CerealUpgraderBase();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CerealUpgraderBase(::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCNAPI explicit CerealUpgraderBase(::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform

    MCNAPI void bindCallback(
#if defined(LL_PLAT_A) // @header-generator platform
        std::function<void(entt::meta_any&, entt::meta_any&)>,
        std::vector<std::string> const&,
        std::vector<std::string>
#else // @header-generator platform
        ::std::function<void(::entt::meta_any&, ::entt::meta_any&)> cb,
        ::std::vector<::std::string> const&                         source,
        ::std::vector<::std::string>                                destination
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void ignore(std::vector<std::string> const&);
#else // @header-generator platform
    MCNAPI void move(::std::vector<::std::string> const& source, ::std::vector<::std::string> destination);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void move(std::vector<std::string> const&, std::vector<std::string>);
#else // @header-generator platform
    MCNAPI ~CerealUpgraderBase();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Puv::internal
