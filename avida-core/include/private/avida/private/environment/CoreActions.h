/*
 *  environment/CoreActions.h
 *  avida-core
 *
 *  Created by David on 2/20/14.
 *  Copyright 2014 Michigan State University. All rights reserved.
 *  http://avida.devosoft.org/
 *
 *
 *  This file is part of Avida.
 *
 *  Avida is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 *
 *  Avida is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License along with Avida.
 *  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Authors: David M. Bryson <david@programerror.com>
 *
 */

#ifndef AvidaEnvironmentCoreActions_h
#define AvidaEnvironmentCoreActions_h

#include "avida/core/Types.h"


namespace Avida {
  namespace Environment {
    
    LIB_LOCAL bool RegisterLogicActions(Feedback& feedback);
    LIB_LOCAL bool RegisterSequenceActions(Feedback& feedback);
    
  };
};

#endif