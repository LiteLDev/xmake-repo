#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_graph/ErrorResult.h"

namespace dragon::framegraph {

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

} // namespace dragon::framegraph
