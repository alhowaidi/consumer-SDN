/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/**
 * Copyright (c) 2016,  Regents of the University of California,
 *                      Colorado State University,
 *                      University Pierre & Marie Curie, Sorbonne University.
 *
 * This file is part of ndn-tools (Named Data Networking Essential Tools).
 * See AUTHORS.md for complete list of ndn-tools authors and contributors.
 *
 * ndn-tools is free software: you can redistribute it and/or modify it under the terms
 * of the GNU General Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later version.
 *
 * ndn-tools is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * ndn-tools, e.g., in COPYING.md file.  If not, see <http://www.gnu.org/licenses/>.
 *
 * See AUTHORS.md for complete list of ndn-cxx authors and contributors.
 *
 * @author Wentao Shang
 * @author Steve DiBenedetto
 * @author Andrea Tosatto
 * @author Davide Pesavento
 * @author Weiwei Liu
 */

#ifndef NDNCATCHUNKS_HPP
#define NDNCATCHUNKS_HPP

//#include "../compression.h"
#include "version.hpp"
#include "options.hpp"
#include "consumer.hpp"
#include "discover-version-fixed.hpp"
#include "discover-version-iterative.hpp"
#include "pipeline-interests-fixed-window.hpp"

#include <ndn-cxx/security/validator-null.hpp>

namespace ndn {
namespace chunks {


class ndnChunks {

public:
ndnChunks(){};

int startChunk(std::string name);//, std::string pathName);

};

} // namespace chunks
} // namespace ndn


#endif // NDN_TOOLS_CHUNKS_CATCHUNKS_NDNCATCHUNKS_HPP
