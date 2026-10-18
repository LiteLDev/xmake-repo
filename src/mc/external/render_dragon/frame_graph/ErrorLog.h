#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_graph/ErrorResult.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framegraph {

#if defined(LL_PLAT_A) // @header-generator platform
struct ErrorLog {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::dragon::framegraph::ErrorResult> m_errorResult;
    // NOLINTEND

public:
    // prevent constructor by default
    ErrorLog& operator=(ErrorLog const&);
    ErrorLog(ErrorLog const&);
    ErrorLog();
};
#else // @header-generator platform
struct ErrorLog {};
#endif // @header-generator platform

} // namespace dragon::framegraph
