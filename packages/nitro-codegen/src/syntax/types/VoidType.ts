import type { Language } from '../../getPlatformSpecs.js'
import type { SourceFile } from '../SourceFile.js'
import type { Type, TypeKind } from './Type.js'

export class VoidType implements Type {
  get canBePassedByReference(): boolean {
    return false
  }
  get kind(): TypeKind {
    return 'void'
  }

  getCode(language: Language): string {
    switch (language) {
      case 'c++':
        return 'void'
      case 'swift':
        return 'Void'
      case 'kotlin':
        return 'Unit'
      default:
        throw new Error(
          `Language ${language} is not yet supported for VoidType!`
        )
    }
  }
  getExtraFiles(): SourceFile[] {
    return []
  }
}