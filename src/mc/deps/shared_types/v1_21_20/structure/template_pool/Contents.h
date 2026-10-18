#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/Description.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/TemplatePoolElement.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool { struct TemplatePoolElement; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Description> mDescription;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_20::JigsawStructureTemplatePool::TemplatePoolElement>> mElements;
    ::ll::UntypedStorage<8, 24> mFallback;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Description> mDescription;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_20::JigsawStructureTemplatePool::TemplatePoolElement>>
                                                            mElements;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<15>> mFallback;
    // NOLINTEND

public:
    // prevent constructor by default
    Contents& operator=(Contents const&);
    Contents();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Contents(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents const&);

    MCAPI ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents&
    operator=(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents&&);

    MCAPI ~Contents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_FALLBACK();

    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool
