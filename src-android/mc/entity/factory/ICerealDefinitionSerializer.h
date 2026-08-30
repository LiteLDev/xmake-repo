#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IDefinitionInstance;
class MinEngineVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ICerealDefinitionSerializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ICerealDefinitionSerializer() = default;

    virtual std::shared_ptr<IDefinitionInstance> serializeDefinitionInstance(::gsl::not_null<const CompoundTag*>, ::MinEngineVersion const&, ::cereal::ReflectionCtx const&) const = 0;

    virtual std::shared_ptr<IDefinitionInstance> serializeDefinitionInstance(::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&, ::MinEngineVersion const&, ::cereal::ReflectionCtx const&) const = 0;
    // clang-format on
    // NOLINTEND
};
