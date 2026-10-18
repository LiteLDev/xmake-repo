#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/EditorConnectionJoinIntent.h"
#include "mc/network/ServerEditorConnectionPolicy.h"
#include "mc/platform/Result.h"

namespace EditorConnectionUtils {
// functions
// NOLINTBEGIN
MCNAPI ::Bedrock::Result<::EditorConnectionJoinIntent> validateEditorConnectionJoinIntent(
    ::ServerEditorConnectionPolicy serverPolicy,
    ::EditorConnectionJoinIntent   clientJoinIntent,
    bool                           serverIsEditorWorld,
    bool                           clientIsEditorCapable
);
// NOLINTEND

} // namespace EditorConnectionUtils
#endif // @header-generator platform
