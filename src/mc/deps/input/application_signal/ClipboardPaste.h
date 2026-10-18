#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/signals/Signal.h"
#include "mc/deps/input/application_signal/ClipboardData.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/signals/Signal.h"

// auto generated forward declare list
// clang-format off
namespace ApplicationSignal { struct ClipboardData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ApplicationSignal {

#if defined(LL_PLAT_A) // @header-generator platform
class ClipboardPaste : public ::Bedrock::Signal<ApplicationSignal::ClipboardPaste, ApplicationSignal::ClipboardData> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ClipboardPaste
: public ::Bedrock::Signal<::ApplicationSignal::ClipboardPaste, ::ApplicationSignal::ClipboardData> {};
#else // @header-generator platform
class ClipboardPaste {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ApplicationSignal
