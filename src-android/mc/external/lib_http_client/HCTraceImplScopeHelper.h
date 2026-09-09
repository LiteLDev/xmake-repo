#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCTraceLevel.h"

// auto generated forward declare list
// clang-format off
struct HCTraceImplArea;
// clang-format on

class HCTraceImplScopeHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HCTraceImplArea const*> m_area;
    ::ll::TypedStorage<4, 4, ::HCTraceLevel const>     m_level;
    ::ll::TypedStorage<8, 8, char const* const>        m_scope;
    ::ll::TypedStorage<8, 8, unsigned long long const> m_id;
    // NOLINTEND
};
