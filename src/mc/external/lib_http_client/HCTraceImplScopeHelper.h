#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/lib_http_client/HCTraceLevel.h"

// auto generated forward declare list
// clang-format off
struct HCTraceImplArea;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class HCTraceImplScopeHelper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::HCTraceImplArea const*> m_area;
    ::ll::TypedStorage<4, 4, ::HCTraceLevel const>     m_level;
    ::ll::TypedStorage<8, 8, char const* const>        m_scope;
    ::ll::TypedStorage<8, 8, unsigned long long const> m_id;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk1b4d24;
    ::ll::UntypedStorage<4, 4> mUnk170320;
    ::ll::UntypedStorage<8, 8> mUnk9fd83a;
    ::ll::UntypedStorage<8, 8> mUnk315215;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    HCTraceImplScopeHelper& operator=(HCTraceImplScopeHelper const&);
    HCTraceImplScopeHelper(HCTraceImplScopeHelper const&);
    HCTraceImplScopeHelper();
#endif // @header-generator platform
};
