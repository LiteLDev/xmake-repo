#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/external/gameface/cohtml/BreakIteratorBoundary.h"
#include "mc/external/gameface/cohtml/TextDirection.h"

// auto generated forward declare list
// clang-format off
namespace cohtml::i18n { class IBreakIterator; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace cohtml {

class IInternationalizationManager {
public:
    // IInternationalizationManager inner types declare
    // clang-format off
    struct TextDirectionResult;
    // clang-format on

    // IInternationalizationManager inner types define
    struct TextDirectionResult {};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInternationalizationManager() = default;

    virtual ::cohtml::i18n::IBreakIterator* CreateBreakIterator(::cohtml::i18n::BreakIteratorBoundary type);

    virtual ::cohtml::i18n::TextDirection ComputeBaseDirection(char const* utfBuffer, uint size) const;

    virtual ::cohtml::i18n::TextDirection ComputeTextDirection(
        char const*                                                  utfBuffer,
        uint                                                         size,
        ::cohtml::IInternationalizationManager::TextDirectionResult* result
    ) const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace cohtml
