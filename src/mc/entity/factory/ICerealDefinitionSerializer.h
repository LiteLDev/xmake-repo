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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnka5ad39;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ICerealDefinitionSerializer& operator=(ICerealDefinitionSerializer const&);
    ICerealDefinitionSerializer(ICerealDefinitionSerializer const&);
    ICerealDefinitionSerializer();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~ICerealDefinitionSerializer() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<IDefinitionInstance> serializeDefinitionInstance(::gsl::not_null<const CompoundTag*>, ::MinEngineVersion const&, ::cereal::ReflectionCtx const&) const = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::IDefinitionInstance> serializeDefinitionInstance(
        ::rapidjson::
            GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const&,
        ::MinEngineVersion const&,
        ::cereal::ReflectionCtx const&
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<IDefinitionInstance> serializeDefinitionInstance(::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&, ::MinEngineVersion const&, ::cereal::ReflectionCtx const&) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::std::shared_ptr<::IDefinitionInstance> serializeDefinitionInstance(
        ::gsl::not_null<::CompoundTag const*>,
        ::MinEngineVersion const&,
        ::cereal::ReflectionCtx const&
    ) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
