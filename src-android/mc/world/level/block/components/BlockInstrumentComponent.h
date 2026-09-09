#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/NoteBlockInstrument.h"

// auto generated forward declare list
// clang-format off
class Block;
struct BlockInstrumentDescription;
// clang-format on

struct BlockInstrumentComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 4, std::array<std::optional<SharedTypes::v1_26_20::NoteBlockInstrument>, 2>> mInstruments;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<SharedTypes::v1_26_20::NoteBlockInstrument> getInstrument(uchar) const;

    MCNAPI std::string const getInstrumentName(uchar) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BlockInstrumentComponent const& getOrDefault(::Block const&);
    // NOLINTEND
};
