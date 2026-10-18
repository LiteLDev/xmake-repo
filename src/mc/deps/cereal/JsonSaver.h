#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicRapidJSONSchemaWriter.h"
#include "mc/deps/cereal/BasicSaver.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SaverConfig; }
namespace cereal { struct SchemaWriter; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace cereal {

class JsonSaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 168>   mWriter;
    ::ll::UntypedStorage<8, 176>   mPrettyWriter;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        168,
        ::cereal::BasicRapidJSONSchemaWriter<::rapidjson::Writer<
            ::rapidjson::GenericStringBuffer<::rapidjson::UTF8<char>, ::rapidjson::CrtAllocator>,
            ::rapidjson::UTF8<char>,
            ::rapidjson::UTF8<char>,
            ::rapidjson::CrtAllocator,
            0>>>
        mWriter;
    ::ll::TypedStorage<
        8,
        184,
        ::cereal::BasicRapidJSONSchemaWriter<::rapidjson::PrettyWriter<
            ::rapidjson::GenericStringBuffer<::rapidjson::UTF8<char>, ::rapidjson::CrtAllocator>,
            ::rapidjson::UTF8<char>,
            ::rapidjson::UTF8<char>,
            ::rapidjson::CrtAllocator,
            0>>>
                                   mPrettyWriter;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mPretty;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    JsonSaver();
#else // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~JsonSaver() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
