#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/NoteBlockInstrument.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct NoteBlockInstrumentEnum {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindNoteBlockInstrument(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindNoteBlockInstrument(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string noteBlockInstrumentToString(::SharedTypes::v1_26_20::NoteBlockInstrument);
#else // @header-generator platform
    MCAPI static ::std::string noteBlockInstrumentToString(::SharedTypes::v1_26_20::NoteBlockInstrument instrument);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
