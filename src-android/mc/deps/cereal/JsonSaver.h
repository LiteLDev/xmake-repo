#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicRapidJSONSchemaWriter.h"
#include "mc/deps/cereal/BasicSaver.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SaverConfig; }
namespace cereal { struct SchemaWriter; }
// clang-format on

namespace cereal {

class JsonSaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168>   mWriter;
    ::ll::UntypedStorage<8, 176>   mPrettyWriter;
    ::ll::TypedStorage<1, 1, bool> mPretty;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonSaver();

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
