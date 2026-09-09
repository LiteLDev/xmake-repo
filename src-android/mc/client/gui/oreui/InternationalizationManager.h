#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/BreakIteratorBoundary.h"
#include "mc/external/gameface/cohtml/IInternationalizationManager.h"
#include "mc/external/gameface/cohtml/TextDirection.h"

// auto generated forward declare list
// clang-format off
namespace cohtml::i18n { class IBreakIterator; }
// clang-format on

namespace OreUI {

class InternationalizationManager : public ::cohtml::IInternationalizationManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~InternationalizationManager();

    virtual ::cohtml::i18n::IBreakIterator* CreateBreakIterator(::cohtml::i18n::BreakIteratorBoundary);

    virtual ::cohtml::i18n::TextDirection ComputeBaseDirection(char const*, uint) const;

    virtual ::cohtml::i18n::TextDirection ComputeTextDirection(char const*, uint, ::cohtml::IInternationalizationManager::TextDirectionResult*) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cohtml::i18n::IBreakIterator* $CreateBreakIterator(::cohtml::i18n::BreakIteratorBoundary);

    MCNAPI ::cohtml::i18n::TextDirection $ComputeBaseDirection(char const*, uint) const;

    MCNAPI ::cohtml::i18n::TextDirection
    $ComputeTextDirection(char const*, uint, ::cohtml::IInternationalizationManager::TextDirectionResult*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
