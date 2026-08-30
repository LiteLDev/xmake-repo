#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources::Archive {

class Reader
: public ::Bedrock::
      ImplBase<Bedrock::Resources::Archive::Reader, Bedrock::ImplCtor(std::unique_ptr<uchar[]>, const ulong&)> {};

} // namespace Bedrock::Resources::Archive
