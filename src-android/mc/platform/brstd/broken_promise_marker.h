#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd::detail {

struct broken_promise_marker : public ::std::exception {};

} // namespace brstd::detail
