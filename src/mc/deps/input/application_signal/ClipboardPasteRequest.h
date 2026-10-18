#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/signals/Signal.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/signals/Signal.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ApplicationSignal {

#if defined(LL_PLAT_A) // @header-generator platform
class ClipboardPasteRequest : public ::Bedrock::Signal<ApplicationSignal::ClipboardPasteRequest, void> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ClipboardPasteRequest : public ::Bedrock::Signal<::ApplicationSignal::ClipboardPasteRequest, void> {};
#else // @header-generator platform
class ClipboardPasteRequest {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ApplicationSignal
