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
    MCNAPI static void bindNoteBlockInstrument(::cereal::ReflectionCtx&);

    MCNAPI static std::string noteBlockInstrumentToString(::SharedTypes::v1_26_20::NoteBlockInstrument);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
