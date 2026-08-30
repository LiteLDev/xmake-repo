#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/LoadResult.h"
#include "mc/resources/PackLoadInfo.h"
#include "mc/world/item/components/CerealComponentItemDataLoader.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class SemVersion;
struct ComponentItemDataAll_Latest;
struct ComponentItemData_v1_26_0;
namespace Json { class Value; }
namespace SharedTypes::Legacy { struct ComponentItemData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ComponentItemDataLoader {
public:
    // ComponentItemDataLoader inner types define
    using Validator = std::function<void(Puv::LoadResult<ComponentItemDataAll_Latest>&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                 mCtx;
    ::ll::TypedStorage<8, 240, ::CerealComponentItemDataLoader> mLoader;
    ::ll::TypedStorage<8, 80, ::PackLoadInfo>                   mPackLoadInfo;
    ::ll::UntypedStorage<8, 48>                                 mValidatorFn;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemDataLoader(
        ::BedrockLoadContext const&,
        ::PackLoadInfo const&,
        ::cereal::ReflectionCtx const&,
        std::function<void(Puv::LoadResult<ComponentItemDataAll_Latest>&)>
    );

    MCNAPI ::Puv::LoadResult<ComponentItemDataAll_Latest> load(::Json::Value const&, ::SemVersion const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::BedrockLoadContext const&,
        ::PackLoadInfo const&,
        ::cereal::ReflectionCtx const&,
        std::function<void(Puv::LoadResult<ComponentItemDataAll_Latest>&)>
    );
    // NOLINTEND
};
